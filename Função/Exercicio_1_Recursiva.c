#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somatoria (int n)
{
int soma=0;
if(n>=1)
{
    soma=somatoria(n-1)+n;
    return soma;
}
}

int main()
{
    setlocale(LC_ALL,"portuguese");
    int n,soma=0;
    printf("Digite um número maior que 1 para verificar a somatória: \n");
    scanf("%d",&n);
    soma=somatoria(n);
    printf("A somatória dos números até %d é %d",n,soma);
    return 0;
}
