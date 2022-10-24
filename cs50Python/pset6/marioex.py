from cs50 import get_int

def main():
    # Setting the height
    h = height()

    ## Setting the height
    for i in range(h):

        # Steps to the right
        print(" " * ( h - i - 1), end="")

        # Block of steps
        print("#" * (i + 1), end="")

        print()

def height():

    while True:

        #Saving the height
        alt = get_int("Height: ")
        
        # Checking if the height is between 1 and 8
        if alt < 1 or alt > 8:
            break
        return alt
main()
