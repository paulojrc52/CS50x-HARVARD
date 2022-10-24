#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
// ----------------CHAVE PARA CRIPTOGRAFIA-------------

    // Verifica se a chave existe
    if (argc != 2)
    {
        printf("Use: ./caesar +key\n");
        return 1;
    }
    for(int i = 0, c = strlen(argv[1]); i < c; i++)
    {
        // Verifica se a chave é um numero inteiro e positivo
        if (isdigit(argv[1][i]) == false)
        {
            printf("Use: ./caesar +key\n");
            return 1;
        }
    }

    // Converte a string para int
    int k = atoi(argv[1]);

// -------------------CRIPTOGRAFIA------------------------

    // Solicita o texto simples ao usuario
    string txtS = get_string("Plaintext: ");

    // Mostra o texto criptografado
    printf("Ciphertext: \n");

    // Criptografando o texto
    for(int j = 0, m = strlen(txtS); j < m; j++)
    {
        if (isupper(txtS[j]))
        {
            printf("%c", (txtS[j] - 65  + k) %26 + 65);
        }
        else if (islower(txtS[j]))
        {
            printf("%c", (txtS[j] - 97 + k) %26 + 97);
        }
        else
        {
            printf("%c", txtS[j]);
        }
    }
    printf("\n");
}