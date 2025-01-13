'''
Instance variable are the variables whose separete copy is created in very object.
Instacne variables are defined and initialized using a constructor wiith self paramater.
'''

class Mobile:
    def __init__(self):
        self.model = "realmeX"  #Instance variable 
        
    def shwo_model(self):
        print(self.model)
        
realme = Mobile()