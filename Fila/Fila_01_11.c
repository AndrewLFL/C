#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAZ 10

typedef struct FILA {
    int ra[MAZ];
    int fim;
}fila;

int cheia (fila f);
int vazia (fila f);
void adicionar(fila *f);
void mostra (fila f);
void atender (fila *f);

int main()
{
    setlocale(LC_ALL,"portuguese");
    fila f;
    int i;
    f.fim=-1;
    do
    {
    printf("\n");
    printf("[1] incluir novo aluno na fila\n[2] atender próximo aluno\n[3] para mostrar a fila\n[0] sair");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
    adicionar(&f);
    break;
    case 2:
    atender(&f);
    break;
    case 3:
    printf("\n\n");
    mostra(f);
    printf("\n\n");
    break;
    }
    }
    while(i!=0);
    return 0;

}

int cheia (fila f)
{
return (f.fim==(MAZ-1));
}

int vazia (fila f)
{
return (f.fim==-1);
}

void adicionar(fila *f)
{
    int ras;
    if (cheia(*f))
    {
    printf ("\n\nfila cheia!\n");
    }
    else
    {
    printf("\nDigite o RA do novo aluno:");
    scanf("%d",&ras);
    f->fim++;
    f->ra[f->fim] = ras;
    }
}

void atender (fila *f)
{
    if (vazia(*f))
    {
    printf ("\n\nFila vazia\n");
    }
    else
    {
    printf("\nProximo a ser atendido: Ra %d\n",f->ra[0]);
        for (int i=0;i<=f->fim;i++)
        {
        f->ra[i]=f->ra[i+1];
        }
        f->fim--;
    }
}

void mostra (fila f)
{
    if (vazia(f))
    {
    printf ("\n\nFila vazia - Nada para mostrar\n");
    }
    else
    {
        for (int i=0; i<=f.fim; i++)
        {
        printf ("%d ", f.ra[i]);
        }
    }
}
