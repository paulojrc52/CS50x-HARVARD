from cs50 import get_int

while True:
    #Saving the height
    alt = get_int("Height: ")
    # Checking if the height is between 1 and 8
    if alt >= 1 and alt <= 8:
        break

## Setting the height
for i in range(alt):
    # Steps to the right
    print(" " * ( alt - i - 1), end="")
    # Block of steps
    print("#" * (i + 1), end="")

    print()




