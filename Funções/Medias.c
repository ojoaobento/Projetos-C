/*-----------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:

1- Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra. 
    1.1- Se a letra for A a função calcula a média aritmética das notas do aluno,
    1.2- Se for P, a sua média ponderada (pesos: 5, 3 e 2)
    1.3- Se for H, a sua média harmônica. 
2- A média calculada também deve retornar por parâmetro. 
-----------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

float mediaA(float a){
    return a/3;
}

//******************************************************************************************

float mediaP(float b[3]){
    return (b[0]*5+b[1]*3+b[2]*2)/10;
}

//******************************************************************************************

float mediaH(float c[3]){
    return 3 / (1/c[0] + 1/c[1] + 1/c[2]);
}

//******************************************************************************************

int main (){
    float nota[3];
    char opcao;
    int i;
    float soma=0;
    float mediaArit=0;
    float mediaPond=0;
    float mediaHarm=0;


    do{
        for(i=0;i<3;i++){
            printf("\nDigite a %d nota do aluno: ", i+1);
            scanf("%f", &nota[i]);
            soma += nota[i];
        }
        printf("\nA- Para realizar o calculo da media aritmetica");
        printf("\nP- Para realizar o calculo da media ponderada");
        printf("\nH- Para realizar o calculo da media harmonica");
        printf("\nF- Para finalizar o programa");
        printf("\nDigite sua opcao de escolha: ");
        scanf(" %c", &opcao);

        switch(opcao){
        case 'A':
        case 'a':
            mediaArit = mediaA(soma);
            printf("\nA media aritmetica encontrada foi: %.2f ", mediaArit);
            break;
        case 'P':
        case 'p':
            mediaPond = mediaP(nota);
            printf("\nA media ponderada encontrada foi: %.2f ", mediaPond);
            break;
        case 'H':
        case 'h':
            mediaHarm = mediaH(nota);
            printf("\nA media harmonica encontrada foi: %.2f ", mediaHarm);
            break;
        case 'F':
        case 'f':
            printf("\nFinalizou o programa");
            break;
        default:
            printf("\nNenhuma opcao foi valida, tente novamente");
            break;
        }
    } while (opcao != 'F' && opcao != 'f');

    return 0;
}