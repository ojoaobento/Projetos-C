/*---------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo:
1- Identificar se as notas fornecidas são pares.

3- Somar as notas pares e contar quantas delas existem.

4- Calcular a média aritmética apenas das notas que são pares.

4- Se nenhuma das notas for par, exibir uma mensagem informando isso.
----------------------------------------------------------------------------*/

#include <stdio.h>
int main() {
    //variaveis
    int nota1;
    int nota2;
    int nota3;
    float media_aritmetica;
    int contador=0;
    int soma=0;

    //entradas

    printf("Informe o valor da nota 1: ");
    scanf("%d", &nota1);
    
    printf("Informe o valor da nota 2: ");
    scanf("%d", &nota2);

    printf("Informe o valor da nota 3: ");
    scanf("%d", &nota3);

    //processamento if

    if (nota1 % 2 == 0) {
        soma+=nota1;
        contador++;
    }
    if (nota2 % 2 == 0) {
        soma+=nota2;
        contador++;
    }
    if (nota3 % 2 == 0) {
        soma+=nota3;
        contador++;
    } 

    if(contador == 0) {
        printf("\nNenhuma das nota e PAR");
    } 

    //calculo
    media_aritmetica = (float)soma/contador;

    // saida
    
    printf("\n\n------- RESULTADOS -------\n\n");
    printf("A media aritmetica vai ser de: %.2f", media_aritmetica);
    
    return 0;
}