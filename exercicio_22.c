/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        Foram declaradas as variáveis (numA, numB e resistencia). 
        O usuário insere dois valores do tipo float através das funções (printf e scanf).

        A fórmula aplicada no código é a de resistência equivalente em paralelo, 
        onde a variável 'resistencia' armazena o resultado da operação matemática 
        1/((1/numA) + (1/numB)). O valor da resistência equivalente é então mostrado ao usuário."
*/

#include <stdio.h>

int main () {
    float numA, numB;
    float resistencia;

    printf("Informe os numeros: \n");
    printf("NumA: ");
    scanf("%f", &numA);
    printf("NumB: ");
    scanf("%f", &numB);

    resistencia = 1/((1/numA) + (1/numB));

    printf("Req = %f ohms\n", resistencia);

    return 1;
}

