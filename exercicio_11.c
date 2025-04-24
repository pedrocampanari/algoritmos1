/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(num1, num2 e divisao). 
        No próximo passo, é utilizado as funções(printf e scanf) para 
        coleta dos num1 e num2. Após, divide e retorna o resultado da divisão."
*/

#include <stdio.h>
int main () {
    int num1, num2, divisao;

    printf("Informe dois numeros.\n");
    printf("Num1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    divisao = num1 / num2;
    printf("\nO resultado é: %d / %d = %d\n\n", num1, num2, divisao);

    return 1;
}