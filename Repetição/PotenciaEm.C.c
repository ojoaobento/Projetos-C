/*-------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
1- Iniciar uma variável base com o número 3 (base das potências).

2- Utilizar uma estrutura de repetição (for) para percorrer os expoentes de 0 a 15.

3- Calcular a potência de 3 em cada iteração (3^expoente).

4- Exibir o resultado de cada potência no formato 3^expoente = resultado.
-------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variáveis
    int i;
    int elevado = 1; // Inicialização com 3^0

    // processando e exibindo os resultados das potências
    for(i = 0; i <= 15; i++) {
        printf("\nO valor de 3 elevado a %d vai ser igual: %d", i, elevado);
        elevado *= 3;  // Multiplica por 3 a cada iteração
    }

    return 0;
}