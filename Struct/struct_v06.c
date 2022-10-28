#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 5

typedef struct {
    char nome[40];
    char genero[20];
    int integrantes;
    int posicao;
} banda;

void ranking();
void genero();
void favorita();

int main()
{
    setlocale(LC_ALL,"portuguese");
    banda bandas[MAX];
    int p,opcao;
    char estilo[40],bnome[40];
    for(int i=0;i<MAX;i++)
    {
    printf("Digite os dados da %d� banda: \n",i+1);
    printf("Nome:\n");
    gets(bandas[i].nome);
    printf("G�nero musical:\n");
    gets(bandas[i].genero);
    printf("N�mero de integrantes:\n");
    scanf("%d",&bandas[i].integrantes);
    printf("Posi��o no seu ranking:\n");
    scanf("%d",&bandas[i].posicao);
    getchar();
    }
        do{
         printf("\n Digite uma opcao para prosseguir: ");
         printf("\n (1) Mostrar Todas as Bandas\n (2) Mostrar Banda em uma Determinada Posi��o\n (3) Mostrar Bandas que Tocam um Determinado G�nero de M�sica");
         printf("\n (4) Verificar Bandas no seu Ranking\n (0) Para Encerrar o Programa");
         printf("\n Resposta: ");
         scanf("%d", &opcao);
            switch(opcao)
            {
            case 1:
            for(int i=0;i<MAX;i++)
            {
            printf("\nDados da %d� banda: \n",i+1);
            printf("Nome: %s \n",bandas[i].nome);
            printf("G�nero musical: %s\n",bandas[i].genero);
            printf("N�mero de integrantes: %d\n",bandas[i].integrantes);
            printf("Posi��o no seu ranking: %d\n",bandas[i].posicao);
            }
            break;
            case 2:
            printf("Digite uma posi��o do ranking de 1 a 5: ");
            scanf("%d",&p);
            ranking(p,bandas);
            break;
            case 3:
            getchar();
            printf("Digite o g�nero da musica:");
            gets(estilo);
            genero(estilo,bandas);
            break;
            case 4:
            getchar();
            printf("Digite o nome da banda: \n");
            gets(bnome);
            favorita(bnome,bandas);
            break;}
            }
            while(opcao!=0);
    return 0;
    }

void ranking(int p,banda bandas[MAX])
{
    for(int i=0;i<MAX;i++)
    {
        if (bandas[i].posicao==p)
        {
        printf("\nDados da %d� banda: \n",i+1);
        printf("Nome: %s \n",bandas[i].nome);
        printf("G�nero musical: %s\n",bandas[i].genero);
        printf("N�mero de integrantes: %d\n",bandas[i].integrantes);
        printf("Posi��o no ranking: %d\n",bandas[i].posicao);
        }
    }
}


void genero(char estilo[40],banda bandas[MAX])
{
    for (int i=0;i<MAX;i++)
        {
            if (strcmp(estilo,bandas[i].genero)==0)
            {
            printf("\nDados da %d� banda: \n",i+1);
            printf("Nome: %s \n",bandas[i].nome);
            printf("G�nero musical: %s\n",bandas[i].genero);
            printf("N�mero de integrantes: %d\n",bandas[i].integrantes);
            printf("Posi��o no ranking: %d\n",bandas[i].posicao);
            }
        }
}

void favorita(char bnome[40],banda bandas[MAX])
{
    int verif;
        for(int i=0;i<MAX;i++)
        {
            if (strcmp(bnome,bandas[i].nome)==0)
            verif++;
        }
        if(verif!=0)
            printf("\n A banda %s � uma das suas favoritas!\n",bnome);
        else
            printf("\n A banda %s n�o � uma das suas favoritas!\n",bnome);
}
