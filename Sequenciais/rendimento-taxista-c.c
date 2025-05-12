/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo: 
1- Calcular a quantidade de quilômetros percorridos durante o dia.

2- Calcular o consumo médio do carro durante a viagem (km/l).

3- Calcular o lucro líquido do motorista após o gasto com combustível.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    float hodometro_inicial;
    float hodometro_final;
    float combustivel_gasto;
    float quilometros_percorridos;
    float valor_passageiros;
    float lucro_liquido;
    float media_consumo;
    float combustivel_total;

    //entradas

    printf("Informe o valor total recebido atraves dos passageiros: R$ ");
    scanf("%f", &valor_passageiros);

    printf("Digite o hodometro inicial: ");
    scanf("%f", &hodometro_inicial);

    printf("Digite o hodometro final: ");
    scanf("%f", &hodometro_final);

    printf("Informe o total de combustivel gasto: ");
    scanf("%f", &combustivel_gasto);

    //calculos

    quilometros_percorridos = hodometro_final - hodometro_inicial;
    combustivel_total= combustivel_gasto*5.24;
    lucro_liquido= valor_passageiros-combustivel_total;
    media_consumo= quilometros_percorridos / combustivel_gasto;

    //saidas

    printf("\n\n----RESULTADOS OBTIDOS--------\n\n");
    printf("\nA marcacao do hodometro inicial foi: %.2f KM", hodometro_inicial);
    printf("\nA marcacao do hodometro final foi: %.2f KM", hodometro_final);
    printf("\nA media de consumo obtido foi: %.2f KM/L ", media_consumo);
    printf("\nO lucro liquido obtido foi: R$ %.2f ", lucro_liquido);

    return 0;
}