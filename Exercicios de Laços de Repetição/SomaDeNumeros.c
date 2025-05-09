/*------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:

1- Solicitar ao usuário a quantidade de números que ele deseja somar.
2- Usar um loop `for` para ler cada número informado pelo usuário.
3- Calcular a soma total dos números informados.
4- Exibir o resultado da soma.
------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    int i;
    float ler_numeros;
    int digitar;
    float soma_total=0;

    //entradas

    printf("Quantos numeros deseja somar: ");
    scanf("%f", &ler_numeros);

    for (i=1;i<=ler_numeros;i++) {
        printf("Digite o numero %d : ", i);
        scanf("%d", &digitar);

        soma_total += digitar;
    }

    //saida

    printf("A soma total dos numeros sera = %.2f ", soma_total);

    return 0;

    
}