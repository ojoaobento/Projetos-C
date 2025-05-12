/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo:
1- Calcular o salário mensal de um funcionário com base no salário mínimo e número de bicicletas vendidas.

2- Calcular a comissão fixa por bicicleta vendida.

3- Calcular o lucro obtido pela loja com base no valor de venda de cada bicicleta, subtraindo o custo de produção.

4- Apresentar ao usuário o salário total do funcionário e o lucro total da loja.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
int main() {
    //Variaveis
    int numero_empregados;
    float salario_minimo;
    float preco_custo;
    float bicicletas_vendidas;
    float salario_final;
    float lucro_liquido;
    float preco_venda;

    //Entradas

    printf("Digite o numero de funcionarios da loja: ");
    scanf("%d", &numero_empregados);

    printf("Digite o salario minimo: R$ ");
    scanf("%f", &salario_minimo);

    printf("Informe o preco de custo de cada bicicleta vendida: R$ ");
    scanf("%f", &preco_custo);

    printf("Digite o numero de bicicletas vendidas: ");
    scanf("%f", &bicicletas_vendidas);

    //Calcular salario de cada vendedor

    preco_venda=preco_custo*1.5;
    salario_final= (2*salario_minimo)+(0.15*(bicicletas_vendidas*preco_venda)/numero_empregados);
    lucro_liquido= (preco_venda-preco_custo)*bicicletas_vendidas;

    //Saídas

    printf("\n\n---------- RESULTADOS OBTIDOS ----------\n\n");
    printf("O numero de empregados da loja vai ser de: %d\n ", numero_empregados);
    printf("O salario minimo da loja vai ser de: %.2f\n ", salario_minimo);
    printf("O preco de custo de cada bicicleta e de: %.2f\n ", preco_custo);
    printf("O numero de bicicletas vendidas foi de: %f\n ", bicicletas_vendidas);
    printf("O salario final de cada funcionario vai ser de: R$ %.2f\n", salario_final);
    printf("O lucro liquido da loja vai ser de: R$ %.2f\n", lucro_liquido);

    return 0;


}