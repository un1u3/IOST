'''
In python, we follow a principle - If 'it walks like a duck and talk like a duck, 
it must be a duck' which means python doesn't care about which class f object it is, 
if it is an object and required behavior is present for that bject then it will work.
The type of object is distinguisged only at runtime. This is called Ducktyping 
'''

class Duck:
    def walk(self):
        print("Quack Quack")
    
clss Horse:
    def walk(self):
        print("quack")