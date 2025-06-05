people = [
    {"name":"Mubeen", "number":"+1-617-495"},
    {"name":"Ali", "number":"+1-617-496"}
]

name = input("Enter your name: ")
"""
for person in people:
    if person["name"] == name:
        print(f"Name found in the record.")
        break;
else:
    print("Not found in the record.")
"""

if name in people:
    print(f"Number: {people[name]}")
else:
    print("Not found.")
