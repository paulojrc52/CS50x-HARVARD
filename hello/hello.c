#include <cs50.h>
#include <stdio.h>
int main(void)
{
    //Pega o nome do usuário
    string answer = get_string("Qual é o seu nome? ");
    //Cumprimenta o usuário
    printf("Olá, %s\n", answer);
}
