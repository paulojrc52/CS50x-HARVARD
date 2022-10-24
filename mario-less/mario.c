#include <cs50.h>
#include <stdio.h>



int main(void)
{
        // Guarda a altura que o usuario digitar
    int alt;
    do
    {
       alt =  get_int("Altura: ");
    }
    while(alt < 1 || alt > 8);

    for(int i = 1; i <= alt; i++)
    {
        //Imprime o espaço entre os #
        for(int j = alt - i; j >= 1; j--)
            printf(" ");
        // Imprime os #
        for(int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");

    }
}

