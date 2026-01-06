# Eye Sensor : -


import cv2
import mediapipe as mp
import numpy as np
from pydub import AudioSegment
from playsound import playsound
playsound(r"D:\first\Desktop\first.py\first168.mp3")

import time

# Initialize Mediapipe Face Mesh
mp_face_mesh = mp.solutions.face_mesh
face_mesh = mp_face_mesh.FaceMesh(min_detection_confidence=0.5, min_tracking_confidence=0.5)

# Start Webcam
cap = cv2.VideoCapture(0)

# Define Eye Landmarks
LEFT_EYE = [33, 160, 158, 133, 153, 144]
RIGHT_EYE = [362, 385, 387, 263, 373, 380]

# Load alert sound
playsound("first168.mp3")  # Ensure the file exists

# Function to Calculate Eye Aspect Ratio (EAR)
def eye_aspect_ratio(landmarks, eye_points):
    eye = np.array([(landmarks[i].x, landmarks[i].y) for i in eye_points])
    vertical1 = np.linalg.norm(eye[1] - eye[5])
    vertical2 = np.linalg.norm(eye[2] - eye[4])
    horizontal = np.linalg.norm(eye[0] - eye[3])
    ear = (vertical1 + vertical2) / (2.0 * horizontal)
    return ear

# Main Loop
last_sound_time = 0  # Variable to track the last time the sound was played

while cap.isOpened():
    ret, frame = cap.read()
    if not ret:
        break

    frame = cv2.flip(frame, 1)
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    results = face_mesh.process(rgb_frame)

    if results.multi_face_landmarks:
        for face_landmarks in results.multi_face_landmarks:
            left_ear = eye_aspect_ratio(face_landmarks.landmark, LEFT_EYE)
            right_ear = eye_aspect_ratio(face_landmarks.landmark, RIGHT_EYE)
            avg_ear = (left_ear + right_ear) / 2

            # Display EAR Value on Screen
            cv2.putText(frame, f"EAR: {avg_ear:.2f}", (30, 50), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)

            # Check if eyes are closed
            if avg_ear < 0.2:  # Eye Closed Threshold
                current_time = time.time()
                if current_time - last_sound_time > 2:  # Prevent playing sound too frequently
                    print("👀 Eyes Closed! Playing Sound...")
                    play(alert_sound)  # Play sound using pydub
                    last_sound_time = current_time

    cv2.imshow("Eye Detection", frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
