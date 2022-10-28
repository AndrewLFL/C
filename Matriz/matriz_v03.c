#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"Portuguese");
    int matriz[6][6],cont;
    for(int i=0;i<6;i++)
    {
        printf("Digite os seis valores da %dº linha\n",i+1);
        for (int j=0;j<6;j++)
        {
            printf("Digite o %dº numero da %dº linha\n",j+1,i+1);
            scanf ("%d",&matriz[i][j]);
            if(matriz[i][j]>10)
            {
            cont++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10\n",cont);
    return 0;
}
