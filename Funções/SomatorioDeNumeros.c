/*--------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
1- Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse
valor.
--------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>

float somatorio(int a){
    int i;
    float soma=0;

    for(i=1;i<=a;i++){
        soma += i;
    }

    return soma;
}

//******************************************************************************************

int main (){
    int numero;
    float result;

    //entradas
    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &numero);

    //verificacao

    if (numero < 0){
        printf("\nInsira apenas NUMEROS POSITIVOS");
    } else {

    result=somatorio(numero);

    printf("\n------RESULTADOS OBTIDOS-------\n");
    printf("\nO somatorio do numero %d foi: %g", numero, result);

    }

    return 0;
}