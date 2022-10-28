#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAZ 30

int main()
{
    char nome[MAZ];
    printf("Digite um nome: \n");
    gets(nome);
    int c=strlen(nome);
    printf("%s possui %d caracteres \n",nome,c);
    return 0;
}
