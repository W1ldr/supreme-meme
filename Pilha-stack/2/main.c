#include <stdio.h>
#include <stdlib.h>

#include "p.c"

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
            Push(valor);
            break;
        case 2:
            Pop();
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