#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fat(int n);

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    int n,f;
    printf("Digite um n�mero para ver seu fatorial:\n");
    scanf("%d",&n);
    f=fat(n);
    printf("o fatorial de %d � %d",n,f);
    return 0;
}

int fat(int n)
{
    int f=1;
        for(int i=n;i>0;i--)
        {
            f*=i;
        }
    return f;
}
