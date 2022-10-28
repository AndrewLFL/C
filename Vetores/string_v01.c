#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAZ 20

int main()
{
    char nome[MAZ];
    printf("Digite um nome: \n");
    gets(nome);
    for(int i=0;i<4;i++)
    printf("%c\n",nome[i]);

    return 0;
}
