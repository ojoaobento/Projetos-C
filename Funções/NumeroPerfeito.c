/*----------------------------------------------------------------------------------------------------------------

Autor: João Victor dos Santos Bento
Objetivo:

1- Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual
a soma dos seus divisores excetuando-o. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). 
2- A função deve retornar um valor booleano. 
----------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>

int verificacao(int a){
    int i;
    int soma=0;

    for(i=1;i<a;i++){
        if ( a % i == 0){
            soma += i;
        }
    }

        if (soma == a){
            return 1;
        } else {
            return 0;
        }
}

//***************************************************************************************

int main (){
    //variaveis
    int numero;

    printf("Digite o valor de um numero: ");
    scanf("%d", &numero);

    //verificacao
    

    printf("\n------- RESULTADOS -------\n");
    if(verificacao(numero)){
        printf("\nO numero %d sera perfeito", numero);
    } else {
        printf("\nO numero %d nao e perfeito", numero);
    }

    return 0;
}