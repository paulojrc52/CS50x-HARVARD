#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int letras = 0;
    int palavras = 1;
    int frases = 0;
    float resultado;

    string s = get_string("Insira seu texto: ");

    // Loop para verificar todos caractere do texto
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Verifica se o caractere é alguma letra maiuscula ou minuscula
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            letras++;
        }
        // Verifica se o caractere é um espaço
        else if (s[i] == ' ')
        {
            palavras++;
        }
        // Verifica se o caractere é algum tipo de pontuação
        else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            frases++;
        }
    }
    // Calcula a quantidade de letras e frases para cada 100 palavras
    float letrasm = ((float) letras / palavras) * 100;
    float frasesm = ((float) frases / palavras) * 100;
    //Coleman
    resultado = ((0.0588 * letrasm) - (0.296 * frasesm) - 15.8);

    int a = (int) round(resultado);

    if (a < 0)
    {
        printf("Before Grade 1\n");
    }
    else if (a > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.i\n", a);
    }
}