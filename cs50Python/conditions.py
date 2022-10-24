from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")

if x < y:
    print("X é menor que Y")
elif x > y:
    print("X é maior que Y")
else:
    print("X é igual a Y")