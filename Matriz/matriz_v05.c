#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int matriz[5][5];
    for(int i=0;i<5;i++)
    {
        printf("Digite os cinco valores (positivos) da %d� linha\n",i+1);
        for (int j=0;j<5;j++)
        {
            printf("Digite o %d� numero da %d� linha\n",j+1,i+1);
            scanf ("%d",&matriz[i][j]);
            if (matriz[i][j]%2==0)
            {
            matriz[i][j]=1;
            }
            else
            {
            matriz[i][j]=-1;
            }
        }
    }
    for (int i=0;i<5;i++)
    {
    printf ("\nValores substituidos da %d� linha\n",i+1);
        for (int j=0;j<5;j++)
        {
        printf ("O %d� numero da %d� linha �: %d\n",j+1,i+1,matriz[i][j]);
        }
    }
    return 0;
}
