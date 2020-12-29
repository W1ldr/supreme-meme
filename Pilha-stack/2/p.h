
#include <stdlib.h>
typedef struct p
{
    int x;
    struct p *prox;
} lista;

lista *Topo = NULL;

//
//add
void Push(int elem);
//remov
void Pop();
void stacktop();
void print();