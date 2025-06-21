/*------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
1- Soma das Diagonais de uma Matriz 4x4
2- Crie um algoritmo que leia uma matriz quadrada de 4 linhas e 4 colunas e
calcule a soma dos elementos da diagonal principal e da diagonal secundária. 
--------------------------------------------------------------------------------------*/
#include <stdio.h>
int main (){
    //variaveis
    int matriz[4][4];
    int i;
    int j;
    float somaP=0;
    float somaS=0;

    //entradas

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
                printf("Digite o valor da matriz[%d, %d]: ", i, j);
                scanf("%d", &matriz[i][j]);

                if(i == j){
                somaP += matriz[i][j];
                }
                if(i + j == 3){
                somaS += matriz[i][j];
                }
        }
    }

    //saidas

    printf("\n------RESULTADOS OBTIDOS------\n");
    printf("\nA matriz encontrada foi:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nA soma das diagonais principais foi: %.2f ", somaP);
    printf("\nA soma das diagonais secundarias foi: %.2f ", somaS);

    return 0;
}