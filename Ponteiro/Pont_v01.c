#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void maiormenor(int*maior,int*menor,int a,int b);

int main()
{
    setlocale(LC_ALL,"portuguese");
    int a,b,valmaior=0,valmenor=0;
    printf("Digite dois números: \n");
    scanf("%d %d",&a,&b);
    maiormenor(&valmaior,&valmenor,a,b);
    printf("O maior é %d e o menor é %d",valmaior,valmenor);
    return 0;
}

void maiormenor(int*maior,int*menor,int a, int b)
{
    if (a<b)
    {
        *maior=b;
        *menor=a;
    }
     if (a>b)
    {
        *maior=a;
        *menor=b;
    }
}
