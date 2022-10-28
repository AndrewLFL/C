#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAZ 4

typedef struct pilha {
int cod[MAZ];
int topo;
} container;

void push (int codo, container *p1, container *p2);
void pop (int codo, container *p1, container *p2);
int vazia (container p);
int cheia (container p);
void mostra (container p);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    container p1,p2;
    int i,codo;
    p1.topo=-1;
    p2.topo=-1;
    do{
    printf("Digite 0 para sair\nDigite 1 para adicionar container\nDigite 2 para retirar container");
    scanf("%d",&i);
        switch(i)
        {
        case 1:
        printf("Digite o codigo do container:");
        scanf("%d",&codo);
        push(codo,&p1,&p2);
        mostra (p1);
        printf("\n\n");
        mostra (p2);
        break;
        case 2:
        printf("Digite o codigo do container:");
        scanf("%d",&codo);
        pop(codo,&p1,&p2);
        mostra (p1);
        printf("\n\n");
        mostra (p2);
        break;
        }
    }
    while(i!=0);
    return 0;
}

int cheia (container p)
{
return (p.topo==MAZ-1);
}

int vazia (container p)
{
return (p.topo==-1);
}

void push (int codo, container *p1, container *p2)
{
if ((cheia (*p1))&&(cheia (*p2)))
printf ("\n\n Impossivel empilhar!");
else
{
    if(p1->topo>p2->topo)
    {
    p2->topo++;
    p2->cod[p2->topo] = codo;
    }
    else
    {
    p1->topo++;
    p1->cod[p1->topo] = codo;
    }
}
}

void pop (int codo, container *p1, container *p2)
{
if ((vazia (*p1))&&(vazia (*p2)))
printf ("\n\n Erro - pilhas vazias\n");
else
{
    if((codo==p1->cod[p1->topo])||(codo==p2->cod[p2->topo]))
    {
            if(codo==p2->cod[p2->topo])
            {
            p2->topo--;
            printf ("\nElemento removido: %d\n",codo);
            }
            else
            {
            p1->topo--;
            printf ("\nElemento removido: %d\n",codo);
            }
    }
    else
    {
    printf ("\n\n Impossivel desempilhar!\n");
    }
}
}

void mostra (container p)
{
for (int i=(p.topo);i>=0;i--)
{
printf ("\n%d\n",p.cod[i]);
}
}