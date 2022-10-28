#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int v[9],i;
    for(i=0;i<9;i++)
    {
    printf("Digite o numero %d do vetor \n",i);
    scanf("%d",&v[i]);
    }
    for (i=0;i<9;i++)
    {
    if (v[i]%2==0)
    printf("Posição %d - Valor armazenado %d\n",i,v[i]);
    }
    return 0;
}
