import csv

with open("Favorite TV Shows - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    next(reader)
    for row in reader:
        print(row["title"])