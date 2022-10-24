// Implements a dictionary's functionality

#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[26];
int counter = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Returns the hash value of the word
    int index = hash(word);

    /*Scans the entire list of words with the
     same hash value, the word search*/
    for(node *aux = table[index]; aux != NULL; aux = aux->next)
    {
        if(strcasecmp(aux->word, word) == 0)
        {
            return true;
        }
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // Variable for sum, positive only
    unsigned long sum =0;

    /*Iterates all the letters of the word,
    adding the ASCII value of each character*/
    for(int i = 0; i < strlen(word); i++)
    {
        sum += toupper(word[i]);
    }
    return sum % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open the dictionary file in reading "r" mode
    FILE *file = fopen(dictionary, "r");

    // Check if the file could be opened or not
    if(file == NULL)
    {
        printf("Could not open dictionary\n");
        return false;
    }

    // Determines the word variable inside the function
    char word[LENGTH + 1];

    // Enter all the words in the dictionary
    while(fscanf(file, "%s", word) != EOF)
    {
        /*Allocate memory to a new node and
        check if memory has been allocated properly*/
        node *head = malloc(sizeof(node));

        if(head != NULL)
        {
            // Copy given word to node
            strcpy(head->word, word);
            // Returns the position of the word in the hash table
            int index = hash(word);

            // We set the pointer to the head
            head->next = table[index];

            // And then take your place
            table[index] = head;

            // Update word count
            counter++;
        }
        // Returns false if memory cannot be allocated
        else
        {
            return false;
        }
    }
    // Close the open file
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // Returns the counter wariable that is updated with each new word loaded
    return counter;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Repeat and clear all lists from each row of the hash table
    for(int i = 0; i < N; i++)
    {
        // Release each node of the line
        while(table[i] != NULL)
        {
            // We define an auxiliary node to point to the second node
            node *aux = table[i]->next;

            // We free the memory used by the first node
            free(table[i]);

            // We then make the list point to the next node
            table[i] = aux;
        }

    }
    return true;
}
