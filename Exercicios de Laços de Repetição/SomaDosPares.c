/*------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
1- Iniciar uma variável para acumular a soma dos pares.

2- Usar uma estrutura de repetição para percorrer os números de 1 a 500.

3- Verificar se o número é par (divisível por 2).

4- Se for par, adicionar à soma.

5- Após o loop, exibir o resultado da soma total.
------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    int i;
    float soma_pares = 0;

    //processamento

    for (i=1;i<=500;i++) {
        if (i % 2 == 0) {
            printf("\nOs valores pares sao: %d ", i);

            soma_pares += i;
        }
    }

    //saidas
    printf("\n\nA soma dos numeros pares foi de: %.2f", soma_pares);

    return 0;

}