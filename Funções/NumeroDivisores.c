/*-------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:

1- Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores
desse valor. 
-------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int divisores (int a){
    int i;
    int qntdDivisores=0;

    for(i=1;i<a;i++){
        if (a % i == 0){
            qntdDivisores++;
        }
    }
    return qntdDivisores;
}

//******************************************************************************************

int main (){
    //variaveis
    int numero;
    int result;

    //entradas

    printf("Insira um numero inteiro e positivo: ");
    scanf("%d", &numero);

    result = divisores(numero);

    printf("\n-----------RESULTADOS OBTIDOS-----------\n");
    printf("\nA quantidade de divisores do numero %d, foi: %d ",numero, result);

    return 0;
}