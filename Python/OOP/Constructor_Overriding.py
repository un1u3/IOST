class Father:
    
    def __init__(self):
        self.money = 2000
        print("Father classs Constructoe ")
        

''' 
If we write constructor in the both classes, parent class and child class then the parent class constructor is not available 
to the child class.
In this case child class constructor is acessible which means child class constructor is replacing parent class constructor
'''


# super() method is used to call parent class constructor or methods from the child class. 

class Son(Father):
    def __init__(self):
        super().__init__() # from here the code goes to parent classs constructor 