#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Pontos atribuídos a cada letra do alfabeto
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Obter palavras de entrada de ambos os jogadores
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Pontue as duas palavras
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Imprima o vencedor
    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if( score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tiel!\n");
    }
}

int compute_score(string word)
{
    int soma_pontos = 0;
    // TODO: Calcular e retornar pontuação para string
    for(int i =0, c = strlen(word); i < c; i++)
    {
        if(isalpha(word[i]))
        {
            int desl_let = toupper(word[i]) - 'A';
            soma_pontos += POINTS[desl_let];
        }
    }
    return soma_pontos;
}