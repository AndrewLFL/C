#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAZ 20

int main()
{
    char nome[MAZ];
    printf("Digite um nome: \n");
    gets(nome);
    int c=strlen(nome);
    for(int i=0;i<c;i++)
    {
    if (i%2!=0)
    printf("%c\n",nome[i]);
    }
    return 0;
}
