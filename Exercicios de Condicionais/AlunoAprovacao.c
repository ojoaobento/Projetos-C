/*------------------------------------------------------------------------------------------------------------------------------------------
Autor: João Victor dos Santos Bento;
Objetivo:

1- Calcular a média das notas do aluno.

2- Comparar a média com a nota de corte para aprovação (geralmente 6,0, mas pode variar dependendo da situação).

3- Imprimir uma mensagem informando se o aluno foi aprovado ou reprovado, dependendo da comparação da média com a nota de corte.
------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
int main() {
    //variaveis
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    float media;

    //entradas

    printf("Digite a primeira nota do aluno: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%d", &nota3);

    printf("Digite a quarta nota do aluno: ");
    scanf("%d", &nota4);

    //calcular media

    media=(nota1+nota2+nota3+nota4) / 4.0;

    //saidas com processamento if

    if(media>=7) {
        printf("\nO ALUNO foi APROVADO");
    } else {
        printf("\nO ALUNO foi REPROVADO");
    }

    return 0;

    
}