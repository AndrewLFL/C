#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void multi(int *num,int n,int x);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int *num;
    int n,x;
    do
    {
    printf("Digite a quantidade de n�meros do vetor: \n");
    scanf("%d",&n);
    }
    while(n<=0);
    num = (int*) malloc(n*sizeof(int));
    if (num==0)
    {
        printf("Erro! Mem�ria insuficiente!");
        exit(0);
    }
    printf("Digite um n�mero para ver seus m�ltiplos: \n");
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
    int cont=0;
    for(int i=0;i<n;i++)
    {
        if(num[i]%x==0)
        {
            cont++;
        }
    }
    printf("O vetor possui %d valores m�ltiplos de %d\n",cont,x);
    printf("Os valores do vetor s�o:\n");
    for(int i=0;i<n;i++)
    {
        printf("O %d� n�mero � [%d] \n",i+1,num[i]);
    }
    free(num);
}
