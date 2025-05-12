/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo: 
1- Calcular a média aritmética de três valores fornecidos pelo usuário.
2- Calcular a média harmônica desses três valores.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <stdio.h>
int main() {
    //Variaveis
    float valor1;
    float valor2;
    float valor3;
    float mediaAritmetica;
    float mediaHarmonica;

    //Entradas

    printf("Digite o valor 1:  ");
    scanf("%f", &valor1);

    printf("Digite o valor 2:  ");
    scanf("%f", &valor2);

    printf("Digite o valor 3:  ");
    scanf("%f", &valor3);

    //Calculos

    mediaAritmetica= (valor1+valor2+valor3)/3;
    mediaHarmonica= 3/(1/valor1+1/valor2+1/valor3);

    //Saídas

    printf("\n\n------ RESULTADOS ------\n\n");
    printf("A media aritmetica sera de: %.2f\n", mediaAritmetica);
    printf("A media harmonica sera de: %.2f\n", mediaHarmonica);

    return 0;
}