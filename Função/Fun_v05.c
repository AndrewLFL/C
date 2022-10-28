#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mdc(n1,n2);

int main()
{
    int n1,n2,m;
    setlocale(LC_ALL,"portuguese");
    printf("Digite dois números para descobrir seu mdc\n");
    scanf("%d %d",&n1,&n2);
    m=mdc(n1,n2);
    printf("O MDC de %d e %d é: %d",n1,n2,m);
    return 0;
}

int mdc(int n1, int n2)
{
    int resto;
    while (n2!=0)
    {
        resto=n1%n2;
        n1=n2;
        n2=resto;
    }
    return n1;
}
