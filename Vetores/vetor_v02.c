#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 10

int main()
{
setlocale(LC_ALL,"portuguese");
int i, v[max], i2=0, v2[max];
for (i=0;i<max;i++)
    {
        printf("Digite 10 números (%d/%d): ",i+1,max);
        scanf (" %d",v+i);
        if ((v[i]%2!=0)&&(v[i]%3!=0)&&(v[i]%7!=0))
            {
            v2[i2]=v[i];
            i2++;
            }
        if ((v[i]==2)||(v[i]==3)||(v[i]==7))
            {
            v2[i2]=v[i];
            i2++;
            }
    }
for (i=0;i<i2;i++)
    {
    printf("\n%i\n",v2[i]);
    }
return 0;
}
