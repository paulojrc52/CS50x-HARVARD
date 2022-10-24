#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

/*Árvore(tree) é um ponteiro para um nó que é a raiz da árvore
que estamos pesquisando.
number é o valor que estamos tentando encontrar na árvore.*/
bool search (node *tree int number)
{
    /*Primeiro, nos certificamos de que a árvore não NULL, se alcançamos
    um nó na parte inferior, ou se nossa árvore estiver totalmente vazia*/
    if(tree == NULL)
    {
        return false;
    }

    /*Se estivermos procurando por um número menor que o número
    da árvore, pesquisar do lado esquerdo, usando o nó à esquerda
    como a nova raiz*/
    else if(number < tree->number)
    {
        return search(tree->left, number);
    }

    // Caso contrário, pesquise no lado direito, usando o nó à direita como a nova raiz
    else if(number > tree->number)
    {
        return search(tree->right, number);
    }
    // Finalmente se encontrarmos o número, podemos retornar true(verdadeiro)
    else
    {
        return true;
    }
}