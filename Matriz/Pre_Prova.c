#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int matriz[3][6],somai=0,somae=0,somas=0;
    
    for (int i=0;i<3;i++)
    {
    printf("Insira os valores da %iº linha:\n\n",i+1);
        for (int j=0;j<6;j++)
        {
        printf("Insira o valor da %iº coluna:\n",j+1);
        scanf ("%i",&matriz[i][j]);
        }
    }
    
            for (int i=0;i<3;i++)
            {
                if(i%2==0)
                {
                    for (int j=0;j<6;j++)
                    {
                    somai+=matriz[i][j];
                    }            
                }
            }
    printf("o valor da soma dos valores das linhas impares é: %i\n",somai);
    
            for (int i=0;i<3;i++)
            {
                    for (int j=0;j<6;j++)
                    {
                        if(j==1||j==3)
                        {
                        somae+=matriz[i][j];
                        }
                    }            
            }
    printf("a media dos valores presentes nas 2ª e 4ª colunas é: %i\n",somae/6);
    
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<6;j++)
        {
            if (j==0||j==1)
            {
            somas+=matriz[i][j];
            }
                if (j==5)
                {
                matriz[i][j]=somas;
                }
        }
    somas=0;    
    }
    
    for (int i=0;i<3;i++)
    {
    printf("Os valores alterados da %iº linha:\n\n",i+1);
        for (int j=0;j<6;j++)
        {
        printf("valor da %iº coluna: %i\n",j+1,matriz[i][j]);
        }
    }
    return 0;
}
