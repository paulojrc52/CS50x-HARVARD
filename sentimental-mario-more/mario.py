from cs50 import get_int

while True:
    n = get_int("Height: ")
    if n >= 1 and n <=8:
        break

for i in range(n):
       # Steps to the right
        print(" " * ( n - i - 1), end="")
        # Block of steps
        print("#" * (i + 1), end="")
        # Left side column
        print(" " * 2 + "#" * (i + 1), end="")
        print()
