import csv

with open("./favorites.csv", "r") as file:
    reader = csv.reader(file)

    scratch, python, c = 0,0,0

    next(reader)
    for row in reader:
        favourite = row[1]

        if favourite == "Python":
            python += 1
        elif favourite == "Scratch":
            scratch += 1
        elif favourite == "C":
            c += 1

print("Result:  ")
print(f"Python: {python}")
print(f"Scratch: {scratch}")
print(f"C: {c}")
