#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Fadicao();
void Fsubtracao();
void Fmultiplicacao();
void Fdivisao();

int main()

{
    setlocale(LC_ALL,"Portuguese");
    int opcao=0;
    while(opcao!=5)
    {
    printf("\nOP��ES\n 1 Adi��o\n 2 Subtra��o\n 3 multiplica��o\n 4 Divis�o \n 5 Sair\n");
    scanf("%d",&opcao);
    switch (opcao)
        {
        case 1:Fadicao();
            break;
        case 2:Fsubtracao();
            break;
        case 3:Fmultiplicacao();
            break;
        case 4:Fdivisao();
            break;
        }
    }
    return 0;
}

void Fadicao()
{
float n1,n2,r;
printf("\nDigite dois n�meros: ");
scanf("%f %f",&n1,&n2);
r=n1+n2;
printf("\n%.2f + %.2f = %.2f",n1,n2,r);
}

void Fsubtracao()
{
float n1,n2,r;
printf("\nDigite dois n�meros: ");
scanf("%f %f",&n1,&n2);
r=n1-n2;
printf("\n%.2f - %.2f = %.2f",n1,n2,r);
}

void Fmultiplicacao()
{
float n1,n2,r;
printf("\nDigite dois n�meros: ");
scanf("%f %f",&n1,&n2);
r=n1*n2;
printf("\n%.2f * %.2f = %.2f",n1,n2,r);
}

void Fdivisao()
{
float n1,n2,r;
printf("\nDigite dois n�meros: ");
scanf("%f %f",&n1,&n2);
if(n2==0)
{
printf("N�o existe divis�o por zero.\n");
}
if (n2!=0);
{
r=n1/n2;
printf("\n%.2f / %.2f = %.2f\n",n1,n2,r);
}
}


