#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");
    int matriz[2][2],soma;
    for (int i=0;i<2;i++)
    {
    printf ("Digite dois numeros para a %d� linha\n",i+1);
        for (int j=0;j<2;j++)
        {
        printf ("Digite o %d� numero para a %d� linha\n",j+1,i+1);
        scanf ("%d",&matriz[i][j]);
        soma+=matriz[i][j];
        }
    }
    for (int i=0;i<2;i++)
    {
    printf ("\nValores da %d� linha\n",i+1);
        for (int j=0;j<2;j++)
        {
        printf ("O %d� numero da %d� linha �: %d\n",j+1,i+1,matriz[i][j]);
        }
    }
    printf ("\nA soma dos valores da matriz �: %d",soma);
    return 0;
}
