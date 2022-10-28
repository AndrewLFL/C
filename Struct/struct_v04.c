#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct
{
char nome[50],email[50];
float notas [5];

} aluno;
int main()
{
    setlocale(LC_ALL,"portuguese");
    float m,soma;
    aluno alum[5];
    for(int i=0;i<5;i++)
    {
        printf("Insira seu nome e email: \n");
        getchar();
        gets(alum[i].nome);
        gets(alum[i].email);
        for(int j=0;j<5;j++)
    {
    printf("Insira a %d nota: \n",j+1);
    scanf("%f",&alum[i].notas[j]);
    soma+=alum[i].notas[j];
    }
    m=soma/5;
    printf("A média do %dº aluno é %.2f \n",i+1,m);
    soma=0;
    }
    return 0;
}
