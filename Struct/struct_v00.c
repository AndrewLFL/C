#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct
{
    float x;
    float y;
} Cordenadas;
int main()
{
    setlocale(LC_ALL,"portuguese");
    Cordenadas ponto;
    printf("Diga as cordenadas de um ponto:\n");
    scanf("%f %f",&ponto.x,&ponto.y);
    printf("As cordenadas do ponto são: x=%6.2f | y=%6.2f \n",ponto.x,ponto.y);
    return 0;
}
