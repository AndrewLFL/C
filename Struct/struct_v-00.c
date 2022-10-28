#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct
{
    int RE;
    char nome[50];
    float salario;
} funcionario;
int main()
{
    setlocale(LC_ALL,"portuguese");
    funcionario func1,func2;
    printf("Dados do 1º funcionario\n\n\n");
    printf("informe o nome:\n");
    gets (func1.nome);
    printf("Informe o RE:\n");
    scanf("%d",&func1.RE);
    printf("Informe o salário:\n");
    scanf("%f",&func1.salario);
    printf("\n\n");
    strcpy(func2.nome, func1.nome);
    func2.RE = func1.RE;
    func2.salario = func1. salario;
    printf("\n\nNome: %s\n", func2.nome);
    printf("RE %d\n",func2.RE);
    printf("Salario R$%6.2f", func2.salario);
    return 0;
}
