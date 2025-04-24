/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(num1, num2 e soma). 
        No próximo passo, é utilizado as funções(printf e scanf) para coleta do num1 e num2, 
        para depois somá-los. Após, retorna o resultado da soma."
*/

#include <stdio.h>

int main() {
    int num1, num2, soma;
    printf("Informe os dois numeros para soma. \nNum1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("\n\nA soma: %d + %d = %d\n", num1, num2, soma);

    return 1;
}