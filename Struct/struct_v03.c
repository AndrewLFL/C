#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10
typedef struct
{
  char nome[50];
  char matricula[3];
  float tvendas;
  float comission;
} vendedor;

int main()
{
setlocale(LC_ALL,"portuguese");
vendedor vend[MAX];
float comis_soma;
for(int i=0;i<MAX;i++)
{
 printf("Insira o nome do vendedor: \n");
 gets(vend[i].nome);
 printf("Insira o numero da matricula: \n");
 gets(vend[i].matricula);
 printf("Insira o total de vendas do mês: \n");
 scanf("%f",&vend[i].tvendas);
    if (vend[i].tvendas>5000)
    {
    vend[i].comission=vend[i].tvendas*0.1;
    printf("A comissão do vendedor é de:% 6.2f\n",vend[i].comission);
    comis_soma+=vend[i].comission;
    }
    else
    vend[i].comission=0;
    getchar();
}
for(int i=0;i<MAX;i++)
{
printf ("Nome: %s\n",vend[i].nome);
printf ("Matricula: %s\n",vend[i].matricula);
printf ("Total venda R$%6.2f\n",vend[i].tvendas);
printf ("Comissão: R$%6.2f\n\n",vend[i].comission);
}
printf ("A soma das comissões dos vendedores é: R$%6.2f\n\n",comis_soma);
return 0;
}
