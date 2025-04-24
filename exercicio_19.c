/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio),  
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente.  
        Foram declaradas as variáveis (num1, num2 e x). Através das funções (printf e scanf),  
        o usuário insere dois valores do tipo float.

        Em seguida, os dois valores são multiplicados e o resultado é armazenado na variável x,  
        que é do tipo inteiro, ocasionando perda de precisão. Por fim, o resultado é retornado ao usuário."
*/

#include <stdio.h>

int main () {
    float num1, num2;
    int x;

    printf("Informe dois valores.");
    printf("\nNum1:");
    scanf("%f", &num1);
    printf("Num2:");
    scanf("%f", &num2);

    x = num1 * num2;
    printf("Resultado: %d\n", x);
    return 1;
}