#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void multi(int *num,int n,int x);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int *num;
    int n,x;
    printf("Digite a quantidade de números do vetor: \n");
    scanf("%d",&n);
    num = (int*) malloc(n*sizeof(int));
    printf("Digite um número para ver seus múltiplos: \n");
    scanf("%d",&x);
    printf("Digite os valores do vetor: \n");
    for(int i=0;i<n;i++)
    {
        printf("Digite o %dº número: \n",i+1);
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
    printf("O vetor possui %d valores múltiplos de %d\n",cont,x);
    printf("Os valores do vetor são:\n");
    for(int i=0;i<n;i++)
    {
        printf("O %dº número é [%d] \n",i+1,num[i]);
    }
    free(num);
}
