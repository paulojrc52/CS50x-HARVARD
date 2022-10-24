#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Pega os números do usuario
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    //Divide x por y
    float z = (float)x / (float)y;
    printf("%f\n", z);
}