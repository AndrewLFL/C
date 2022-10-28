#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAZ 500

typedef struct
{
char sexo;
float salario;
int idade,numf;
} habitante;
int main()
{
    setlocale(LC_ALL,"portuguese");
    int m,soma;
    float ms,somas;
    habitante habi[MAZ];
    for(int i=0;i<MAZ;i++)
    {
    printf("Insira sua idade e seu sexo(F ou M): \n");
    scanf("%d %c",&habi[i].idade,&habi[i].sexo);
    habi[i].sexo=toupper(habi[i].sexo);
    printf("Insira seu salário e quantos filhos você possui: \n");
    scanf("%f %d",&habi[i].salario,&habi[i].numf);
    somas+=habi[i].salario;
    soma+=habi[i].numf;
    }
    ms=somas/MAZ;
    printf("A média dos salários é: R$ %6.2f \n",ms);
    m=soma/MAZ;
    printf("A média dos filhos é: %d \n",m);
    return 0;
}
