# Decorators

def greet(fx):
    def mfx():
        print("Good Morning")
        
        fx()
        print("Thanks For using This function")
    return mfx

@greet
def hello():
    print("Hello World!")
    
hello()




# A decorator in Python is a function that modifies or enhances another function's behavior without changing its code, typically used for logging, access control, or validation