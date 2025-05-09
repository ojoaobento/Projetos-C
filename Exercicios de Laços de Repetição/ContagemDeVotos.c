/*------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
1- Contar os votos de 4 candidatos, votos nulos e em branco.
2- A entrada de votos deve ser finalizada quando o valor 0 for informado.
3- O programa deve exibir o total de votos para cada candidato, nulos e em branco.
------------------------------------------------------------------------------------*/

#include <stdio.h>

int main () {
    //variaveis
    int voto;
    int voto1 = 0;
    int voto2 = 0;
    int voto3 = 0;
    int voto4 = 0;
    int voto5 = 0;
    int voto6 = 0;

    //processamento

    printf("\nInsira 1 para realizar o Voto para o Candidato 1");
    printf("\nInsira 2 para realizar o Voto para o Candidato 2");
    printf("\nInsira 3 para realizar o Voto para o Candidato 3");
    printf("\nInsira 4 para realizar o Voto para o Candidato 4");
    printf("\nInsira 5 para realizar o Voto Nulo");
    printf("\nInsira 6 para realizar o Voto em branco");

    do {


        printf("\nDigite o seu voto: ");
        scanf("%d", &voto);

        switch (voto) 
        {   
            case 0:
            printf("Votacao invalida\n");
            break;

            case 1:
            voto1++;
            break;

            case 2:
            voto2++;
            break;
            
            case 3:
            voto3++;
            break;

            case 4:
            voto4++;
            break;

            case 5:
            voto5++;
            break;

            case 6:
            voto6++;
            break;

            default:
            printf("\nVoto invalido");
            break;
        }


    } while ( voto != 0);

    printf("\n\n----ANALISE DE DADOS-------\n\n");
    printf("\nO total de votos para o candidato 1: %d ", voto1);
    printf("\nO total de votos para o candidato 2: %d ", voto2);
    printf("\nO total de votos para o candidato 3: %d ", voto3);
    printf("\nO total de votos para o candidato 4: %d ", voto4);
    printf("\nO total de votos nulo foi: %d ", voto5);
    printf("\nO total de votos em branco foi: %d ", voto6);

    return 0;

}