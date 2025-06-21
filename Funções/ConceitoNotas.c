/*------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:

1- Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito,
conforme a tabela abaixo:

Nota   // Conceito
de 0,0 a 4,9 -  D
de 5,0 a 6,9 -  C
de 7,0 a 8,9 -  B
de 9,0 a 10,0 - A
------------------------------------------------------------------------------------------------*/
#include <stdio.h>

char conceito(float a){
    if (a>0 && a<=4.9){
        return 'D';
    } else if( a > 5 && a<=6.9){
        return 'C';
    } else if (a > 7 && a <= 8.9){
        return 'B';
    } else if(a > 9 && a<=10){
        return 'A';
    } else {
        return 'X';
    }
}

//******************************************************************************************

int main (){
    float media;
    char result;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    result = conceito(media);
    printf("\n-------RESULTADOS OBTIDOS-------\n");
    if ( result == 'X'){
        printf("\nEssa media nao foi valida, tente novamente");
    } else {
    printf("\nO conceito da media %g, foi: %c", media, result);
    }

    return 0;
    
}