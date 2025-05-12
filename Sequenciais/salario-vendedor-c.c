/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo: 
1- Calcular o valor do INSS com base no salário bruto.

2- Calcular o valor do IR com base no salário bruto após o desconto do INSS.

3- Calcular o salário líquido após o desconto de INSS e IR.


--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    char nome [50];
    float numero_horas_trabalhadas;
    float numero_dependentes;
    float salario_bruto;
    float inss;
    float ir;
    float salario_liquido;

    //entradas

    printf("Informe o nome do funcionario: ");
    fflush(stdin);
    fgets(nome,50,stdin);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &numero_horas_trabalhadas);

    printf("Digite o numero de dependentes de um funcionario: ");
    scanf("%f", &numero_dependentes);

    //calculos

    salario_bruto= (numero_horas_trabalhadas*12) + (40*numero_dependentes);
    inss = salario_bruto * 0.085;
    ir = salario_bruto * 0.05;
    salario_liquido = salario_bruto - (inss+ir);

    //saidas

    printf("\n\n------RESULTADOS OBTIDOS-----------\n\n");
    printf("O nome do funcionario foi: %s ", nome);
    printf("O salario bruto foi: R$ %.2f\n ", salario_bruto);
    printf("O Desconto do INSS foi: R$ %.2f\n ", inss);
    printf("O Desconto do Imposto de Renda foi: R$ %.2f\n ", ir);
    printf("O salario liquido foi de: R$ %.2f\n ", salario_liquido);

    return 0;
}