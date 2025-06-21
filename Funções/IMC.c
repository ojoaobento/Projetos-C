/*-------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:

1-Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso
ideal. 
    1.1 - Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58. 
    1.2- Para mulheres, peso ideal = 62.1 x alt - 44.7. 
-------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>

float peso_ideal(char b, float a){
    
    float peso=0;
    
    switch(b){
        case 'M':
        case 'm':
            peso = (72.7 * a) - 58;
            break;
        case 'F':
        case 'f':
            peso = (62.1 * a) - 44.7;
            break;
        default:
            printf("\nNenhuma das opcoes foi valida, tente novamente");
            break;
    }

    return peso;
}

//******************************************************************************************

int main (){
    //variaveis
    char sexo;
    float altura;
    float result;

    //entradas

    printf("Insira o sexo da pessoa (M-MASCULINO, F-FEMININO): ");
    scanf(" %c", &sexo);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &altura);

    printf("\n-------RESULTADOS OBTIDOS-------\n");
    result = peso_ideal(sexo, altura);
    printf("O peso ideal desse individuo do sexo '%c' e com altura %g, foi: %.2f ",sexo, altura, result);

    return 0;
}