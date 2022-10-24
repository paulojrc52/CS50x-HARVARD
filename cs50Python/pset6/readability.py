import string

def main():
    text = input("Text: ")

    # Saves the number of words in the text
    words = words_count(text)

    # Save the L and S parameters
    L = average_letters(text, words)
    S = average_sentences(text, words)

    # Calculates the Coleman-Liau index
    index = round(0.0588 * L - 0.296 * S - 15.8)

    # Imprime o grau de escolaridade referente ao texto
    if index < 1:
        print("Before Grade 1")
    elif 1 <= index < 16:
        print(f"Grade {index}")
    else:
        print("Grade 16+")

# Count how many letters are in the text
def letters_count(txt):
    lower = list(string.ascii_lowercase)
    upper = list(string.ascii_uppercase)

    counter = 0

    for letter in lower:
        counter += txt.count(letter)

    for letter in upper:
        counter += txt.count(letter)

    return counter

# Count how many sentences are in the text
def sentences_count(txt):
    counter = txt.count(".") + txt.count("!") + txt.count("?")

    return counter

# Count how many words are in the text
def words_count(txt):

    return txt.count(" ") + 1

# Calculates the average of letters per word of the text
def average_letters(txt, w):
    letters = letters_count(txt)

    return round(letters / w * 100, 2)

# Calculates the average of sentences per words of the text
def average_sentences(txt, w):
    sentences = sentences_count(txt)

    return round(sentences / w * 100, 2)

main()