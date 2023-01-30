word = input("Enter a word: ")

up = 0
low = 0

for c in word:
    if c.isupper():
        up += 1
    elif c.islower():
        low += 1

print("Capital:", up)
print("Lower:", low)