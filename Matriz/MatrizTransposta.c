/*------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
1- Crie um algoritmo que leia uma matriz 2x3 de números reais e gere a matriz
transposta (3x2). Exiba ambas as matrizes.
--------------------------------------------------------------------------------------*/
#include <stdio.h>
int main (){
    //variaveis
    float matriz[2][3];
    float matriz_trans[3][2];
    int i;
    int j;

    //entradas

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor da matriz [%d, %d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            matriz_trans[i][j]= matriz[j][i];
        }
    }

    //saidas

    printf("\n-----RESULTADOS OBTIDOS-----\n");
    printf("\nA Matriz encontrada foi: \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %g", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nA matriz transposta vai ser: \n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf(" %g", matriz_trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}