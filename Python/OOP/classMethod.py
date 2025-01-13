'''
Class methods are the methods which act upon the class variables or stactic variable of the class.

Decorator @classmethod need to write above the class method 
By default, the first parameter of the class methdo is cls which refers to the class itself

'''

# eg

@classmethod
def method_name(cls):
    # method body 
    ...
    
    

class Mobile:
    @classmethod
    def show_model(cls):
        print("RealmeX")


realme = Mobile()
Mobile.show_model()