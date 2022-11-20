#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void multi(int *num,int n,int x);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int *num;
    int n,x;
    printf("Digite a quantidade de n�meros do vetor: \n");
    scanf("%d",&n);
    num = (int*) malloc(n*sizeof(int));
    printf("Digite um n�mero para ver seus multiplos: \n");
    scanf("%d",&x);
    printf("Digite os valores do vetor: \n");
    for(int i=0;i<n;i++)
    {
        printf("Digite o %d� n�mero: \n",i+1);
        scanf("%d",&num[i]);
    }
    multi(num,n,x);
    return 0;
}

void multi(int *num,int n,int x)
{
    int cont;
    for(int i=0;i<n;i++)
    {
        if(num[i]%x==0)
        {
            cont++;
        }
    }
    printf("Os valores do vetor s�o:\n");
    for(int i=0;i<n;i++)
    {
        printf("O %d� n�mero � [%d] \n",i+1,num[i]);
    }
    printf("O vetor possui %d valores multiplos de %d",cont,x);
    free(num);
}
