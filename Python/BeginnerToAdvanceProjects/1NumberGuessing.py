# Number Guessing Game
import random 

user = int(input("ENter a number form 1 to 10"))
rand = random.randint(0,1) #Adjust accoring to you need 

if rand == user:
    print("You won")
    print("Number is  ",rand)
else:
    print("You Loose Number is ",rand)
    
