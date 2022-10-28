#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 3

typedef struct fila {
float item[MAX];
int fim;
} fila;

int cheia (fila f1);
int vazia (fila f1);
void enfileirar (float valor,fila *f1);
float desenfileirar (fila *f1);
void mostra (fila f1);

int main()
{
    fila f1;
    f1.fim=-1; //inicializa o fim
    printf("Inserindo elementos na fila\n");
    enfileirar(1.0,&f1);
    mostra(f1);
    printf("\n");
    enfileirar(2.0,&f1);
    mostra(f1);
    printf("\n");
    enfileirar(3.0,&f1);
    mostra(f1);
    printf("Retirando elementos na fila\n");
    float x=desenfileirar(&f1);
    printf("\n");
    mostra(f1);
    x=desenfileirar(&f1);
    printf("\n");
    mostra(f1);
    x=desenfileirar(&f1);
    printf("\n");
    mostra(f1);
    return 0;
}

int cheia (fila f1)
{
    return (f1.fim==(MAX-1));
}

int vazia (fila f1)
{
    return (f1.fim==-1);
}

void enfileirar (float valor,fila *f1)
{
    if(cheia(*f1))
    printf("Erro. Fila cheia\n");
    else
    {
        f1->fim++;
        f1->item[f1->fim]=valor; //ver ultimo item da fila
    }
}

float desenfileirar (fila *f1)
{
    float valor=0;
    if(vazia(*f1))
    printf("Erro. Fila vazia\n");
    else{
        valor=f1->item[0];
        //passo a frente
        for(int i=0;i<=f1->fim;i++)
        {
            f1->item[i]=f1->item[i+1];
        }
        //andar com marcador
        f1->fim--;
    }
    return valor;
}

void mostra (fila f1)
{
    if(vazia(f1))
    {
    printf("Erro. Fila vazia, nada para mostrar\n");
    }
    else
    {
        for(int i=0;i<=f1.fim;i++)
        {
            printf("\n%.1f\n",f1.item[i]);
        }
    }
}
