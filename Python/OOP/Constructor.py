'''
Python supports a special type of method called constructor for initializing the instance variable of a class
A class Constructor , if defined is called whenever a progam creates an object of that class.

A constructor, if defined is called whenever a program creates an object of that class
A constructor is called only once dat the time of creating an instance.
If two instances are created for a class, the construcot will be caleld once for each instance 
'''

class Mobile:
    
    def __init__(self):  # This is a constructor
        self.model = "RealMeX"
        
realme = Mobile()