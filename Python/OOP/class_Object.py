# class is a blue print for object 
# class is a custom variable 


class ClassName:
    
    def __init__(self):
        self.variable_name = value 
        self.variable_name = 'Value'
        
    def method_names(self):
        ...
        # Body of Methd 
    
    def method_name(self,p1,p2):
        ...
        # Body of  Method 
        
        
# eg

class Mobile:
    
    def __init__(self,m):
        self.model = m 
        
    def show_model(self,p):
        price = p 
        print("Model",self.model,"price",price)
         



# Object is class type variable or class instance. To use a class 
# we should create an object to the class 

# Instance createion represents alloting memory to store the actual data of 
# variables . Each time you create an object of a class a copy of each variable defined in the 
# class is created. In other words you can say that each object of a class has its own copy of 
# data members defined in the class 

object name = class_name()


# How to create Object 

class Mobile:
    def __init__(self):
        self.model = "S24"
        
    def show_model(self):
        print("Model",self.model)
        
samsung = Mobile()


class Mobile:
    def __init__(self):
        self.model = "S24"
        
    def show_model(self):
        print("Model",self.model)
        
samsung = Mobile()

# how it works 
# A block of memory is allocated on head. The size of allocated memory is to 
# be decided from teh attributes and methods available in the class (Mobile)

# After allocatoing memory block, The special method __init__() is called 
# Internally. This method stores the initial data into the variables 
