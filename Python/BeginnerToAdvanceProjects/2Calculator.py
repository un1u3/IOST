# Simple Calculator 

num1 = int(input("Enter a Number"))
Operator = (input("Enter Operatorr"))
num2 = int(input("Enter a Number"))
match Operator:
    case '+':
        print(num1 + num2)
    case '-':
        print(num1 - num2)
    case '*':
        print(num1 * num2)
    case '/':
        print(num1 / num2)
    case '**':
        print(num1 ** num2)
    