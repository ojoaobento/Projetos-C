/*---------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo: 
1- Calcular o rendimento de um funcionário, que é a soma do salário bruto e o prêmio recebido.

2- Verificar se o rendimento excede a base do INSS, e aplicar o desconto de INSS.

3- Verificar se o rendimento, após o desconto do INSS, excede a base do Imposto de Renda (IR), e aplicar o desconto de IR.

4- Calcular o salário líquido, subtraindo o desconto do IR do rendimento total.

5- Exibir o demonstrativo de pagamento com os valores calculados, incluindo o salário bruto, prêmio, rendimento, descontos e o salário líquido.
---------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <stdio.h>
int main () {
    //variaveis
    float salariobruto;
    float premio;
    float base_inss;
    float base_ir;
    float rendimento;
    float salariofinal;
    float salarioliquido;
    float taxainss;
    float taxair;
    float descontoinss;
    float descontoir;

    //entradas

    printf("Informe o salario bruto do funcionario: R$ ");
    scanf("%f", &salariobruto);

    printf("Informe os premios que o funcionario recebeu: R$ ");
    scanf("%f", &premio);

    printf("Digite a base do inss: ");
    scanf("%f", &base_inss);

    printf("Digite a taxa do inss: ");
    scanf("%f", &taxainss);

    printf("Informe a base do imposto de renda: ");
    scanf("%f", &base_ir);

    printf("Digite a taxa do imposto de renda: ");
    scanf("%f", &taxair);

    //calculos

    rendimento = salariobruto + premio;

    //desconto if inss

    if (rendimento > base_inss) {
        descontoinss = rendimento * taxainss;
    } else {
        descontoinss=0;
    }

    //desconto if ir
    
    if ((rendimento-taxainss)> base_ir) {
        descontoir = (rendimento-taxainss) * taxair;
    } else {
        descontoir=0;
    }

    //calculo salario liquido

    salarioliquido=rendimento - descontoinss - descontoir;

    //saidas

    printf("\n\n--------- Demonstrativo do Pagamento ---------\n\n");
    printf("\nO valor do salario bruto vai ser: R$ %.2f", salariobruto);
    printf("\nO valor dos premios vai ser de: R$ %.2f", premio);
    printf("\nO valor do rendimento vai ser de: R$ %.2f", rendimento);
    printf("\nO desconto do imposto de renda vai ser de: %.2f", descontoir);
    printf("\nO desconto do inss vai ser de: R$ %.2f", descontoinss);
    printf("\nO valor do salario liquido e de: R$ %.2f", salarioliquido);

    return 0;

}