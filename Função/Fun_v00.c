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
    printf("\nOPÇÕES\n 1 Adição\n 2 Subtração\n 3 multiplicação\n 4 Divisão \n 5 Sair\n");
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
printf("\nDigite dois números: ");
scanf("%f %f",&n1,&n2);
r=n1+n2;
printf("\n%.2f + %.2f = %.2f",n1,n2,r);
}

void Fsubtracao()
{
float n1,n2,r;
printf("\nDigite dois números: ");
scanf("%f %f",&n1,&n2);
r=n1-n2;
printf("\n%.2f - %.2f = %.2f",n1,n2,r);
}

void Fmultiplicacao()
{
float n1,n2,r;
printf("\nDigite dois números: ");
scanf("%f %f",&n1,&n2);
r=n1*n2;
printf("\n%.2f * %.2f = %.2f",n1,n2,r);
}

void Fdivisao()
{
float n1,n2,r;
printf("\nDigite dois números: ");
scanf("%f %f",&n1,&n2);
if(n2==0)
{
printf("Não existe divisão por zero.\n");
}
if (n2!=0);
{
r=n1/n2;
printf("\n%.2f / %.2f = %.2f\n",n1,n2,r);
}
}


