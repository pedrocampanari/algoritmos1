/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(num1, num2, num3, num4, soma1, 
        soma2 e divisao). No próximo passo, é utilizado as funções(printf e scanf) para 
        coleta dos num1, num2, num3 e num4, para depois somá-los (num1+num2) e (num3+num4). 
        Após, divide o resultado da soma1 pela soma dois e retorna o resultado da divisão."
*/

#include <stdio.h>

int main() {
    int num1, num2, num3, num4, soma1, soma2, divisao;
    printf("Informe os dois numeros para soma. \nNum1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    printf("\nInforme mais dois numeros para soma. \nNum3: ");
    scanf("%d", &num3);
    printf("Num4: ");
    scanf("%d", &num4);


    soma1 = num1 + num2;
    soma2 = num3 + num4;
    divisao = soma1 / soma2;

    printf("\n\nResultado: (%d + %d)/(%d + %d) = %d\n", num1, num2, num3, num4, divisao);

    return 1;
}