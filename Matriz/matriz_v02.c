#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int matriz[3][3],soma,somaDia=0;
    for(int i=0;i<3;i++)
    {
        printf("Digite os tr�s valores da %d� linha\n",i+1);
        for (int j=0;j<3;j++)
        {
            printf("Digite o %d� numero da %d� linha\n",j+1,i+1);
            scanf ("%d",&matriz[i][j]);
            soma+=matriz[i][j];
            if(i==j)
            {
            somaDia+=matriz[i][j];
            }
        }
    }
    printf("A soma dos valores da matriz �: %d\n",soma);
    printf("A soma dos valores da diagonal da matriz �: %d\n",somaDia);
    return 0;
}
