import random

user = input("Enter Scissor, Paper, or Rock: ").lower()

computer = random.randint(0, 2)  # 0: Scissor, 1: Paper, 2: Rock

choices = {0: "scissor", 1: "paper", 2: "rock"}
computer_choice = choices[computer]

print(f"Computer chose: {computer_choice}")

if user not in ["scissor", "paper", "rock"]:
    print("Invalid Move")
elif user == computer_choice:
    print("Draw")
elif (user == "scissor" and computer_choice == "paper") or \
     (user == "paper" and computer_choice == "rock") or \
     (user == "rock" and computer_choice == "scissor"):
    print("You Win")
else:
    print("You Lose")
