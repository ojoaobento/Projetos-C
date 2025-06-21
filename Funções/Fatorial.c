/*-----------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:

1- Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial. 
-----------------------------------------------------------------------------------------*/
#include <stdio.h>

float fatorial(int a){
    int i;
    float resultado=1;

    for(i=1;i<=a;i++){
        resultado *= i;
    }

    return resultado;
}

//******************************************************************************************

int main (){
    //variaveis
    int numero;
    float result;

    printf("Digite o valor de numero inteiro e positvo: ");
    scanf("%d", &numero);

    if (numero < 0){
        printf("\nInsira um valor POSITIVO");
    } else {
    result = fatorial(numero);
    printf("\n-----------RESULTADOS OBTIDOS-----------\n");
    printf("\nO fatorial do numero %d encontrado foi: %.2f ", numero, result);
    }

    return 0;
}