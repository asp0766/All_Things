#  PYTHON WIKIPEDIA ASSISTANT



import speech_recognition as sr
import pyttsx3
import wikipediaapi

# Initialize recognizer class (for recognizing speech)
recognizer = sr.Recognizer()

# Initialize text-to-speech engine
engine = pyttsx3.init()

# Specify your user agent
user_agent = "YourAssistant/1.0 (https://yourwebsite.com; yourname@example.com)"
wiki_wiki = wikipediaapi.Wikipedia(
    language='en',
    user_agent=user_agent
)

# Function to speak out a given text
def speak(text):
    engine.say(text)
    engine.runAndWait()

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
            return command
        except sr.UnknownValueError:
            print("Sorry, I couldn't understand that.")
            return None
        except sr.RequestError:
            print("Could not request results from Google Speech Recognition service.")
            return None

# Function to fetch summary from Wikipedia
def fetch_wikipedia_summary(query):
    page = wiki_wiki.page(query)
    if page.exists():
        return page.summary
    else:
        return "Sorry, I couldn't find any information on that topic."

# Main function to run the assistant
def run_assistant():
    speak("Hello! How can I assist you today?")
    while True:
        command = listen_speech()
        if command is not None:
            command = command.lower()  # Convert to lowercase for easier comparison
            if "hello" in command:
                speak("Hello! How can I help you?")
            elif "your name" in command:
                speak("I am your voice assistant.")
            elif "exit" in command or "stop" in command:
                speak("Goodbye!")
                break
            elif "what is" in command or "tell me about" in command:
                # Extract the query from the command
                query = command.replace("what is", "").replace("tell me about", "").strip()
                summary = fetch_wikipedia_summary(query)
                speak(summary)
            else:
                speak("I'm not sure how to respond to that.")

# Run the assistant
run_assistant()
