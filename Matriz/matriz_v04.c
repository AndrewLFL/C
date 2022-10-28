#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int matriz[3][3],mult[3][3],cont;
    for(int i=0;i<3;i++)
    {
        printf("Digite os três valores da %dº linha\n",i+1);
        for (int j=0;j<3;j++)
        {
            printf("Digite o %dº numero da %dº linha\n",j+1,i+1);
            scanf ("%d",&matriz[i][j]);
            mult[i][j]=5*matriz[i][j];
        }
    }
    for (int i=0;i<3;i++)
    {
    printf ("\nValores multiplicados por 5 da %dº linha\n",i+1);
        for (int j=0;j<3;j++)
        {
        printf ("O %dº numero da %dº linha é: %d\n",j+1,i+1,mult[i][j]);
        }
    }
    return 0;
}
