''''
Inheritacne is the ability of a class to inherit(or take ) characterstics or features from the parent 
'''


class Father():
    def __init__(self):
        ...
        
    def eyes(self):
        print("Eyes are blue")
        
        
class Son(Father):
    ...
    
Ram = Son()
Ram.eyes() 
# The eyes feaures are availabe in Ram's class because its inheriting his Fathers calss 