#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int delta(a,b,c);

float raiz1(a,b,c);

float raiz2(a,b,c);

int main()
{
setlocale(LC_ALL,"Portuguese");
int a, b, c,d;
float r1,r2;
printf("Digite três números para a, b e c");
scanf("%d %d %d",&a,&b,&c);
if(a==0)
printf("Essa não é uma equação do segundo grau");
    else
    {
    d=delta(a, b, c);
    printf("\ndelta= %d",d);
        if (d<0)
        printf("\nNão existem raízes reais");
        else
        {
        r1=raiz1(a, b, c, d);
        printf("\nr1= %.2f",r1);
            if (d>0)
            { r2=raiz2(a, b, c, d);
            printf("\nr2= %.2f",r2);
            }
        }
    }
return 0;
}

int delta(int a,int b,int c)
{
    int d;
    d=b*b-4*a*c;
    return d;
}

float raiz1(int a,int b,int c,int d)
{
   float r1;
   r1=(-b-sqrt(d))/(2*a);
   return r1;
}

float raiz2(int a,int b,int c,int d)
{
   float r2;
   r2=(-b+sqrt(d))/(2*a);
   return r2;
}
