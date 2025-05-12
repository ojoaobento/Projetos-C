/*------------------------------------------------------------------------
Autor: João Victor dos Santos Bento
Objetivo:

1- Ler os números dos 5 alunos e suas respectivas alturas.
2- Identificar o aluno mais alto e o aluno mais baixo.
3- Exibir o número e a altura do aluno mais alto e do aluno mais baixo.
------------------------------------------------------------------------*/

#include <stdio.h>
int main () {
    //variaveis
    int i;
    int altura;
    int numero;
    int altura_Maior = 0;
    int numero_maior = 0;
    int altura_menor = 99999;
    int numero_menor = 0;

    //processamento

    for(i=1;i<=5; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%d", &altura);
    
        printf("Digite o numero da pessoa %d: ", i);
        scanf("%d", &numero);

        if (altura>altura_Maior) {
            altura_Maior=altura;
            numero_maior=numero;
        }
    
        if(altura<altura_menor) {
            altura_menor=altura;
            numero_menor=numero;
        }
    

    }

    printf("\n\n-----ANALISE DOS RESULTADOS------\n\n");

    printf("\nA altura da pessoa mais alta foi: %d cm", altura_Maior);
    printf("\nO numero da pessoa maior foi: %d ", numero_maior);
    printf("\nA altura da pessoa mais baixa foi: %d cm", altura_menor);
    printf("\nO numero da pessoa mais baixa foi: %d ", numero_menor);

    return 0;
}