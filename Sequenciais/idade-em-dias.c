/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo:
1- Solicitar ao usuário sua idade em anos, meses e dias.

2- Converter toda essa idade para o total equivalente em dias.

3- Exibir o resultado final de forma clara e objetiva.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    float idade_anos;
    float meses;
    float idade_dias;
    float idade_final;

    //entradas

    printf("Digite a sua idade expressa em anos: ");
    scanf("%f", &idade_anos);

    printf("Digite a sua idade em meses: ");
    scanf("%f", &meses);

    printf("Insira a sua idade em dias: ");
    scanf("%f", &idade_dias);

    //calculos

    idade_final = (idade_anos * 365) + (meses * 30) + idade_dias;

    //saidas

    printf("\n\n-----RESULTADOS OBTIDOS-----\n\n");
    printf("A idade expressa em dias foi de: %.2f dias ", idade_final);

    return 0;




}