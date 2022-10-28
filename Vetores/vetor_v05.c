#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int vet1[8],vet2[8],vet3[8],pos=0,neg=0,i;
    setlocale(LC_ALL,"portuguese");
    for(i=0;i<8;i++)
    {
        printf("\nDigite um número: ");
        scanf("%d",&vet1[i]);
    }
    for(i=0;i<8;i++)
    {
        if(vet1[i]>0)
    {
        vet2[pos]=vet1[i];
        pos++;
    }
        else
        {
            vet3[neg]=vet1[i];
            neg++;
        }
    }
    for(i=0;i<pos;i++)
    {
        printf("\n valores positivos são: %d\n",vet2[i]);
    }
    for(i=0;i<neg;i++)
    {
        printf("\n valores negativos são: %d\n",vet3[i]);
    }
    return 0;
}
