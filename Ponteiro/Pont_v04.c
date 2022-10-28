#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void inic(int vet[],int t);
void mostravet(int vet[],int t);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int vet[4];
    inic(vet,4);
    for(int i=0;i<4;i++)
    {
    printf("Digite o %dº valor do vetor: \n",i+1);
    scanf("%d",&vet[i]);
    }
    mostravet(vet,4);
    return 0;
}

void inic(int vet[],int t)
{
    for(int i=0;i<t;i++)
    {
    vet[i]=0;
    }
}

void mostravet(int vet[],int t)
{
    printf("Os valores do vetor são: \n");
    for(int i=0;i<t;i++)
    {
    printf("%d\n",vet[i]);
    }
}
