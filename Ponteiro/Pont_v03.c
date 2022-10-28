#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void hm (int mnts,int*h,int*m);

int main()
{
    int h,mnts,m;
    setlocale(LC_ALL,"portuguese");
    printf("Digite os minutos: \n");
    scanf("%d",&mnts);
    hm (mnts,&h,&m);
    printf("\n Horas: %d \n Minutos: %d\n",h,m);
    return 0;
}
void hm (int mnts,int*h,int*m)
{
  *h=mnts/60;
    *m=mnts%60;
}


