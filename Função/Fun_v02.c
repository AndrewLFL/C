#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificavogal(x);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char x;
    int i;

    while(i!=6)
    {
    printf("Digite uma letra:");
    scanf("%c",&x);
    getchar();
    if(verificavogal(x)==1)
    {
        printf("\n O caractere [%c] é uma vogal",x);
    }
    else
    {
        printf("\n O caractere [%c] não é uma vogal",x);
    }
    printf("\n \n");
    printf("Para parar o loop digite 6\n");
    scanf("%i",&i);
    getchar();
    }
    return 0;
}

int verificavogal(x)
{
    if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
    return 1;
    else
    return 0;
}
