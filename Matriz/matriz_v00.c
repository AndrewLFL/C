#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL,"portuguese");
float notas[3][10], media, soma;
for(int j=0;j<10;j++)
{
printf ("Digite as tres notas do aluno %d: \n",j+1);
    for(int i=0;i<3;i++)
    {
    printf ("Digite a nota da prova %d\n",i+1);
    scanf("%f",&notas[i][j]);
    soma+=notas[i][j];
    }
    media=soma/3;
    printf ("A media do aluno %d é: %.2f\n",j+1,media);
    soma=0;
}
return 0;
}
