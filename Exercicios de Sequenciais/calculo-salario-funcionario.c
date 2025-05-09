// calculo-salario-funcionario
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo: Este programa em linguagem C tem como objetivo calcular o salário líquido de um funcionário a partir das seguintes informações:

- Nome, idade e cargo do funcionário
- Salário bruto original
- Reajuste de 38% sobre o salário bruto
- Gratificação de 20% sobre o salário bruto
- Desconto de 15% de Imposto de Renda sobre o salário total (reajuste + gratificação)

O programa imprime todos os valores intermediários e o resultado final com o salário líquido.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
    // Declaração de variáveis
    char nome[50];
    int idade;
    char cargo[50];
    float salario_bruto_anterior;
    float salario_reajustado;
    float gratificacao;
    float salario_total;
    float imposto;
    float salario_liquido;

    // Entrada de dados
    printf("Digite o nome do individuo:  ");
    fflush(stdin);  // Limpa o buffer de entrada
    fgets(nome, 50, stdin);  // Lê o nome

    printf("Digite a idade do individuo:  ");
    scanf("%d", &idade);  // Lê a idade

    printf("Digite o cargo do individuo:  ");
    fflush(stdin);  // Limpa o buffer de entrada
    fgets(cargo, 50, stdin);  // Lê o cargo

    printf("Digite o salario do individuo: R$  ");
    scanf("%f", &salario_bruto_anterior);  // Lê o salário bruto

    // Cálculos
    salario_reajustado = (salario_bruto_anterior * 1.38);  // Reajuste de 38%
    gratificacao = (salario_reajustado * 0.20);  // Gratificação de 20%
    salario_total = salario_reajustado + gratificacao;  // Salário total (reajustado + gratificação)
    imposto = salario_total * 0.15;  // Desconto de 15% de Imposto de Renda
    salario_liquido = salario_total - imposto;  // Salário líquido após descontos

    // Saídas
    printf("\n\n-----RESULTADOS OBTIDOS-----\n\n");
    printf(" O nome do usuario e: %s ", nome);
    printf("O cargo do usuario e: %s ", cargo);
    printf("A idade do usario foi: %d ", idade);
    printf("\n O seu salario reajustado foi: R$ %.2f ", salario_reajustado);
    printf("\n A sua gratificacao foi: R$ %.2f ", gratificacao);
    printf("\n O seu valor de desconto foi: R$ %.2f ", imposto);
    printf("\n O seu salario liquido vai ser de: R$ %.2f ", salario_liquido);

    return 0;

}