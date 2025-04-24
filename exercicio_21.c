/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio),  
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente.  
        Foram declaradas as variáveis (numA, numB e divisao). Através das funções 
        (printf e scanf), o usuário insere dois números inteiros.

        Em seguida, o código realiza a divisão entre os dois números e armazena o resultado 
        na variável divisao. Através de uma estrutura condicional, é verificado se esse resultado 
        é par ou ímpar, retornando a informação ao usuário."
*/

#include <stdio.h>

int main () {
    int numA, numB, divisao;
    printf("Informe os numeros: \n");
    printf("NumA: ");
    scanf("%d", &numA);
    printf("NumB: ");
    scanf("%d", &numB);

    divisao = numA / numB;

    if ((divisao % 2) == 0) {
        printf("Par\n");
    }else {
        printf("Impar\n");
    }

    return 1;
}

