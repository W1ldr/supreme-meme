#include <stdio.h>
#include <stdlib.h>

#include "p.h"

void Push(int elem)
{
    lista *aux = (lista *)malloc(sizeof(lista));
    aux->x = elem;
    if (Topo == NULL)
    {
        Topo = aux;
        aux->prox = NULL;
    }
    else
    {
        aux->prox = Topo;
        Topo = aux;
    }
    printf("ELemento '%i' adicionado\n", elem);
}

void Pop()
{
    if (Topo == NULL)
    {
        printf("Pilha vazia\n");
    }
    else
    {
        lista *alvo = Topo;
        Topo = Topo->prox;
        printf("Elemento '%i' eliminado\n", alvo->x);
        free(alvo);
    }
}

void print()
{
    if (Topo != NULL)
    {
        printf("***********\n");
        printf("%i\n", Topo->x);
        printf("***********\n");
    }
    else
    {
        printf("A lista esta vazia");
    }
}