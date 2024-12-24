import string
import random

lower = string.ascii_lowercase
upper = string.ascii_uppercase
number = string.digits
symbol = string.punctuation

length = 12  # Adjust as needed

password = []

password.append(random.choice(upper))
password.append(random.choice(lower))
password.append(random.choice(number))
password.append(random.choice(symbol))

char_pool = lower + upper + number + symbol
while len(password) < length:
    password.append(random.choice(char_pool))

random.shuffle(password)

final_password = ''.join(password)
print(f"Generated Password: {final_password}")
