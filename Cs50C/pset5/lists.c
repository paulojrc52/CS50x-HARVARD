#include <stdio.h>
#include <stdlib.h>

// Representando um nó
typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    /*Lista de tamanho 0. Inicializamos o valor para NULL explicitamente,
    não há nenhum valor de lixo para nossa variável de lista*/
    node *list = NULL;

    // Alocar memória para um node, n
    node *n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }

    // Definir o valor e ponteiro no nosso node
    n->number = 1;
    n->next = NULL;

    // Adicione o nó n apontando lista para ele, uma vez que só temos um nó até agora
    list = n;

    /*Aloque memória para outro nó, e podemos reutilizar nossa variável n
    para apontar para ele, uma vez que a lista já aponta para o primeiro nó*/
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free(list);
        return 1;
    }

    // Defina os valores em nosso novo nó
    n->number = 2;
    n->next = NULL;

    // Atualizar o ponteiro em nosso primeiro nó para apontar o segundo nó
    list->next = n;

    // Alocar memória para um terceiro nó
    n = malloc(sizeof(node));

    if(n == NULL)
    {
        // Libere nosso outros nós
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;

    /*Siga o próximo ponteiro da lista para o segundo nó e atualize
    o próximo ponteiro para apontar para n*/
    list->next->next = n;

    /*Imprime a lista usando um loop, usando uma variável temporária, tmp,
    para apontar para list, o primeiro nó. Então, toda vez que examinamos o loop, usamos
    tmp = tmp->nextpara atualizar nosso ponteiro temporário para o próximo nó*/

    /*Continue enquanto tmp aponta para algum lugar, parando quando
    chegarmos ao último nó e tmp->next é nulo*/
    for(node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    /*Libere a lista, usando um loop while e uma variável temporária
    para apontar para o próximo nó antes de liberar o atual*/
    while(list != NULL)
    {
        // Nós apontamos para o próximo nó primeiro
        node *tmp = list->next;

        /*Então, podemos liberar o primeiro nó free(list);
        Agora podemos definir a lista para apontar para o próximo nó*/
        list = tmp;

        // Se a lista for nula, quando não houver mais nós restantes, nosso loop while irá parar
    }
    n->next = list;
    list = n;
}