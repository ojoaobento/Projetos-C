/*-------------------------------------------------------------------------------------
Autor; Joao Victor dos Santos Bento;
Objetivo; 

1- Calcular os gastos de combustível em Reais durante uma viagem.

2- Calcular a média de consumo de combustível em termos de quilômetros por litro (km/l).

3- Gerar uma saída clara para o usuário, mostrando as informações detalhadas sobre:
    - Quantidade de combustível gasto (em litros).

    - Distância percorrida (em quilômetros).

    - Gasto total com combustível (em reais).

    - Média de consumo (em km/l).
-------------------------------------------------------------------------------------*/

#include <stdio.h>
int main() {
    //Declarar as variáveis
    int litrosdecombustivel;
    float quilometrospercorridos;
    float combustivelgastoemreal;
    float consumomedio;

    //Entrada de dados
    printf("A quantidade de litros de combustivel gasta foi de:  ");
    scanf("%d", &litrosdecombustivel);

    printf("O total de quilometros percorridos foi de:  ");
    scanf("%f", &quilometrospercorridos);

    //Calculos
    combustivelgastoemreal=(litrosdecombustivel*5.24);
    consumomedio=quilometrospercorridos/litrosdecombustivel;


    //Saídas
    printf("\n\n------ RESULTADOS OBTIDOS ------\n\n");
    printf("\nO Total gasto de combustivel em Real foi de: R$  %.2f", combustivelgastoemreal);
    printf("\nO Consumo Medio de combustivel foi de:  %.2f KM/L", consumomedio);

    return 0;


}