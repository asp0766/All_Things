#  VOICE TO TEXT BY USING PYTHON 



import speech_recognition as sr

# Initialize recognizer class (for recognizing speech)
recognizer = sr.Recognizer()

# Function to capture microphone input
def listen_speech():
    with sr.Microphone() as source:
        print("Adjusting for background noise... Please wait.")
        recognizer.adjust_for_ambient_noise(source)
        print("Listening for your command...")
        audio = recognizer.listen(source)

        try:
            # Recognize speech using Google Speech Recognition
            command = recognizer.recognize_google(audio)
            print(f"You said: {command}")
        except sr.UnknownValueError:
            print("Sorry, I couldn't understand that.")
        except sr.RequestError:
            print("Could not request results from Google Speech Recognition service.")

# Run the function to listen to speech
listen_speech()

