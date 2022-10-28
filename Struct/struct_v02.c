#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
    char nome[50];
    int idade;
} jogador;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    jogador brasil[11];
    for(int i=0;i<11;i++)
    {
    printf("\nDigite o nome do jogador: \n");
    gets(brasil[i].nome);
    printf("\nDigite a idade do %s: \n",brasil[i].nome);
    scanf(" %i",&brasil[i].idade);
    getchar();
    }
    for(int i=0;i<11;i++){
    printf("nome: %s\n",brasil[i].nome);
    printf("idade: %i\n",brasil[i].idade);
    }
    return 0;
}
