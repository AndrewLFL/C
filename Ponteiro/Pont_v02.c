#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void areaq(int*area,int l);
void periq(int*peri,int l);
void diaq(int*dia,int l);


int main()
{
    int area,peri,dia,l;
    setlocale(LC_ALL,"portuguese");
    printf("Digite o lado do quadrado: \n");
    scanf("%d",&l);
    areaq(&area,l);
    periq(&peri,l);
    diaq(&dia,l);
    printf("\n Area: %d\n Perimetro: %d\n Diagonal: %d\n",area,peri,dia);
    return 0;
}
void areaq(int*area,int l)
{
    *area=l*l;
}

void periq(int*peri,int l)
{
    *peri=l*4;
}
void diaq(int*dia,int l)
{
   *dia=l*sqrt(2);
}
