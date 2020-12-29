#include <stdio.h>
#include <stdlib.h>

//
#define SIZE 5

//
int pilha[SIZE], topo = -1;

//
//Add elemento no topo
void push(int Elemento);
//Remover elemento do topo
void pop();
//Imprimir elemento do topo
void print();

//Main
void main()
{
    int comando;
    int valor;
    char info[] = "1-Push\n2-Pop\n3-Print\n4-Sair";

    do
    {
        printf("*********\n");
        puts(info);
        printf("Insira o Comando: ");
        scanf("%i", &comando);
        switch (comando)
        {
        case 1:
            printf("digite o valor desejado: ");
            scanf("%i", &valor);
            push(valor);
            break;
        case 2:
            pop();
            break;
        case 3:
            print();
            break;
        case 4:
            printf("Volte Sempre, Bye!!!!\n");
            break;
        default:
            printf("Comando Invalido\n");
            //scanf("%i", &comando);
            break;
        }
    } while (comando != 4);
}

//Implementacao
//Add elemento no topo
void push(int Elemento)
{
    if (topo < 5)
    {
        topo++;
        pilha[topo] = Elemento;
        printf("*'%i' foi adicionado\n", Elemento);
    }
    else
    {
        printf("pilha cheia\n");
    }
}

//Remover elemento do topo
void pop()
{
    if (topo == -1)
    {
        printf("pilha vazia\n");
    }
    else if (topo > -1 && topo < 5)
    {
        topo--;
    }
}

//Imprimir elemento do topo
void print()
{
    if (topo > -1 && topo < 5)
    {
        printf("***%i\n**", pilha[topo]);
    }
    else
    {
        printf("Pilha vazia\n");
    }
}
