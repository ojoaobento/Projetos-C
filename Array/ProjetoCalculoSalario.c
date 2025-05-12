/*-----------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
    1- Crie um programa em C que leia o nome e o salário bruto de 8 funcionários. O programa deve:
        - Calcular e armazenar o salário líquido de cada funcionário, considerando:
        - Desconto de 8% de INSS se o salário for até R$ 2000;
        - Desconto de 12% se for acima de R$ 2000;
    2- Mostrar o nome, salário bruto, desconto aplicado e salário líquido de cada funcionário;
    3- Ao final, exibir:
        - A média salarial líquida da empresa;
        - Nome do funcionário com maior salário líquido.
-----------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    int i;
    char funcionario[8][50];
    float salariobruto[8];
    float descontoinss=0;
    float salarioliquido=0;
    float media_salarial=0;
    float salario_liquidamedia=0;
    float maior_salario = 0;

    //entradas


    for (i=0;i<8;i++) {
        printf("\n\nDigite o nome do funcionario %d:  ", i+1);
        scanf(" %49[^\n]", funcionario[i]);

        printf("\nInforme o salario bruto do %s: ", funcionario[i]);
        scanf("%f", &salariobruto[i]);

        if (salariobruto[i] <= 2000) {
            descontoinss=0.08;
        } else {
            descontoinss = 0.12;
        }

        if (salariobruto[i] > maior_salario) {
            maior_salario = salariobruto[i];
        }

        //salario liquido

        salarioliquido = salariobruto[i] - descontoinss;
        salario_liquidamedia += salarioliquido;

        //resultados obtidos

        printf("\n\n-------- RESULTADOS -----------\n\n");
        printf("\nO nome do funcionario vai ser: %s ", funcionario[i]);
        printf("\nO salario bruto do %s vai ser de: R$ %.2f ", funcionario[i], salariobruto[i]);
        printf("\nO desconto aplicado foi de: %.2f ", descontoinss);
        printf("\nO salario liquido do %s foi de: R$ %.2f ", funcionario[i], salarioliquido);


    }

    media_salarial = salario_liquidamedia / 8;


    //saidas

    printf("\n\n--------CONCLUSOES FINAIS--------\n\n");
    printf("A media salarial liquida da empresa foi de: %.2f ", media_salarial);
    printf("O maior salario adquirido foi o de: R$ %.2f, a qual seria do %s ", maior_salario, funcionario[i]);

    return 0;

}