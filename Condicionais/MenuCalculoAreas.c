/*----------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo: 
1- Exibir o menu com opções de formas geométricas (círculo, retângulo, trapézio, triângulo).

3- Capturar a escolha do usuário.

4- Solicitar os dados necessários (raio, base, altura, etc.) com base na forma escolhida.

5- Calcular a área usando a fórmula correspondente.

6- Exibir o resultado da área calculada.
----------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    char areas;
    float lado;
    float altura;
    float basemaior;
    float basemenor;
    float base;
    float area;
    float raio;

    //entradas com ifs

    printf("Escolha uma opcao: ");
    printf("\nA- Calculo area do circulo");
    printf("\nB- Calculo area do retangulo");
    printf("\nC- Calculo area do trapezio");
    printf("\nD- Calculo area do triangulo");
    printf("\n\nDigite a letra da area que deseja calcular:  ");
    scanf(" %c", &areas);

    //processamentos ifs

    switch (areas) {
        case 'A':
        case 'a':
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        area=3.14159*(raio*raio);
        printf("A area do circulo de raio %.2f vai ser de: %.2f m2", raio, area );
        break;

        case 'B':
        case 'b':
        printf("Digite o lado do retangulo: ");
        scanf("%f", &lado);
        printf("Digite a altura do retangulo: ");
        scanf("%f", &altura);
        area= lado * altura;
        printf("A area do retangulo de lado %.2f e de altura: %.2f vai possuir uma area de: %.2f m2", lado, altura, area );
        break;

        case 'C':
        case 'c':
        printf("Digite a base maior do trapezio: ");
        scanf("%f", &basemaior);
        printf("Digite a base menor do trapezio: ");
        scanf("%f", &basemenor);
        printf("Digite a altura do trapezio: ");
        scanf("%f", &altura);
        area=((basemaior+basemenor)*altura)/2;
        printf("A area do trapezio de base maior %.2f, de base menor %.2f e de altura %.2f, vai possuir uma area de : %.2f m2", basemaior, basemenor, altura, area );        
        break;

        case 'D':
        case 'd':
        printf("Digite a altura do triangulo: ");
        scanf("%f", &altura);
        printf("Digite a base do triangulo: ");
        scanf("%f", &base);
        area= (base*altura) / 2;
        printf("A area do triangulo de altura %.2f e de base %.2f vai possuir uma area de: %.2f m2", altura, base, area );
        break;

        default:
        printf("Opcao invalida");
        
    }


    return 0;

}