names = ["Mubeen", "Umar", "Ali", "Abubakar"]

name = input("Enter your name: ")

"""
for n in names:
    if n == name:
        print("Found.")
        break;
else:
    print("Not found.")

"""

if name in names:
    print("Found.")
else:
    print("Not found.")