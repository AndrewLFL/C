#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Fadicao(float a,float b);
float Fsubtracao(float a,float b);
float Fmultiplicacao(float a,float b);
void Fdivisao(float a,float b);

int main()

{
    setlocale(LC_ALL,"Portuguese");
    float a1,b1,resultado;
    int opcao;
    while(opcao!=5)
    {
    printf("\nOP��ES\n 1 Adi��o\n 2 Subtra��o\n 3 multiplica��o\n 4 Divis�o \n 5 Sair\n");
    scanf("%d",&opcao);
    if(opcao==5)
        break;
    printf("\nDigite dois n�meros: ");
    scanf("%f %f",&a1,&b1);
    switch (opcao)
        {
        case 1:resultado=Fadicao(a1,b1);
            break;
        case 2:resultado=Fsubtracao(a1,b1);
            break;
        case 3:resultado=Fmultiplicacao(a1,b1);
            break;
        case 4:Fdivisao(a1,b1);
            break;
        }
        if(opcao!=4)
        {
        printf("\n%.2f\n",resultado);
        }
    }
    return 0;
}

float Fadicao(float a,float b)
{
float r;
r=a+b;
return r;
}

float Fsubtracao(float a,float b)
{
float r;
r=a-b;
return r;
}

float Fmultiplicacao(float a,float b)
{
float r;
r=a*b;
return r;
}

void Fdivisao(float a,float b)
{
float r;
if(b==0)
{
printf("N�o existe divis�o por zero.\n");
}
if (b!=0);
{
r=a/b;
printf("\n%.2f\n",r);
}
}

