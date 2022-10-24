#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int popIni, popFin;
    int anos;
    int n;

    //Pegará a população inicial, caso seja maior que 9
    do
    {
        popIni = get_int("Digite a população inicial: ");
    }
    while(popIni < 9);

    // Pegará a população final, caso for maior que inicial
    do
    {
        popFin = get_int("Digite a população final: ");
    }
    while(popFin < popIni);

    // Calcula o numero de anos para alcançar a populaçao
    for(anos = 0; popIni < popFin; anos++)
    {
        popIni = popIni + (popIni / 3) - (popIni / 4);
    }
    printf("Years: %d\n", anos);
}