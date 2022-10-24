#include <cs50.h>
#include <stdio.h>


int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


/*int main(void)
{
    //Pega o valor de n com o usuário
    int n;
    do 
    {
        n = get_int("Largura: ");
    }
    while(n < 1);
    
    //Imprima pontos de interrogação
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}
*/
