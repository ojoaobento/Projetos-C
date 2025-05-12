/*--------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:
    1- Cadastrar até 50 alunos com:
        - Nome
        - Matrícula
        - Três notas (por exemplo: provas)
        - Calcular a média de cada aluno e indicar se está:
        - Aprovado (média ≥ 7)
        - Recuperação (média ≥ 5 e < 7)
        - Reprovado (média < 5)
----------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main () {
    //variaveis

    int i;
    int j;
    char nome[10][50]; //sem espaços
    int matricula[10];
    int notas[3];
    float nota_aluno;
    float media;

    //entradas

    for(i=0;i<10;i++) {
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);

        printf("\nA matricula do %s esta ativa (1-Sim,2-Nao): ", nome[i]);
        scanf("%d", &matricula[i]);

        nota_aluno = 0;

            for (j=0;j<3;j++){
            printf("\nInforme a nota %d do aluno %s: ", j+1, nome[i]);
            scanf("%d", &notas[j]);
            
            nota_aluno += notas[j];
            }


        media = nota_aluno / 3;

        if (matricula[i] == 2) {
            printf("\nA matricula do %s esta inativa", nome[i]);
        } else {
            printf("\nA media do %s foi de: %.2f ", nome[i], media);
            if (media >=7) {
                printf("\nLogo, %s esta Aprovado", nome[i]);
            } else if(media>=5) {
                printf("\nLogo, %s esta de Recuperacao", nome[i]);
            } else {
                printf("\nLogo, %s esta Reprovado", nome[i]);
            }
        }
    }


    return 0;

}