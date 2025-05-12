/*-------------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;

Objetivo: O objetivo do exercício é realizar uma comparação entre duas variáveis, A e B, e calcular o valor de Y com base nas seguintes condições:

1- Se A for menor que B, o valor de Y será a diferença entre B e A (ou seja, Y = B - A).

2- Se B for menor que A, o valor de Y será a diferença entre A e B (ou seja, Y = A - B).

3- Se A e B forem iguais, o valor de Y será a soma de A e B (ou seja, Y = A + B).

4- Ao final, o programa deve imprimir os valores de A, B e Y.
-------------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <stdio.h>
int main() {
    //variaveis
    float valorA;
    float valorB;
    float valorY;

    //entradas

    printf("Digite o valor da variavel A: ");
    scanf("%f", &valorA);

    printf("Digite o valor da variavel B: ");
    scanf("%f", &valorB);

    //procesesamento if

    if (valorA < valorB) {
        valorY = valorB - valorA;
    } else if (valorB < valorA) {
        valorY = valorA - valorB;
    } else if ( valorA == valorB) {
        valorY = valorA + valorB;
    }

    //saidas

    printf("\n\n------------VALORES FINAIS------------\n\n");
    printf("\nO valor final de A, vai ser de: %.2f", valorA);
    printf("\nO valor final de B, vai ser de: %.2f", valorB);
    printf("\nO valor final de Y, vai ser de: %.2f", valorY);

    return 0;
}