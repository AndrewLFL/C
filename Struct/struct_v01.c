#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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
 vendedor vend;
 printf("Insira o nome do vendedor: \n");
 gets(vend.nome);
 printf("Insira o numero da matricula: \n");
 gets(vend.matricula);
 printf("Insira o total de vendas do m�s: \n");
 scanf("%f",&vend.tvendas);
 if (vend.tvendas>5000)
 {
    vend.comission=vend.tvendas*0.1;
    printf("\n A comiss�o do vendedor � de:% 6.2f",vend.comission);
 }
 else
    vend.comission=0;
printf ("Nome: %s\n",vend.nome);
printf ("Matricula: %s\n",vend.matricula);
printf ("Total venda R$%6.2f\n",vend.tvendas);
printf ("Comiss�o: R$%6.2f",vend.comission);
}
