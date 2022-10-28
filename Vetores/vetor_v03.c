#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int pv[10],i,qt;
    float v[10],vt;
    for(i=0;i<10;i++)
    {
    printf("Digite a quantidade vendida e o valor da peça número %d\n",i);
    scanf ("%d %f",&pv[i],&v[i]);
    vt=pv[i]*v[i];
    printf("O valor total da peça número %d é %2.f\n",i,vt);
    }
    qt=pv[0]+pv[1]+pv[2]+pv[3]+pv[4]+pv[5]+pv[6]+pv[7]+pv[8]+pv[9];
    printf("\nA quantidade total de peças vendidas é %d\n",qt);
    return 0;
}
