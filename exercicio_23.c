/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        Foram declaradas as variáveis (memoria, num1, num2 e index). 
        Através das funções (printf e scanf), o usuário insere o número de termos 
        da sequência de Fibonacci que deseja visualizar.

        O código então utiliza um loop para gerar e exibir os números de Fibonacci, 
        onde a cada iteração o valor de 'memoria' armazena a soma dos dois primeiros 
        números da sequência, e esses valores são atualizados para as próximas iterações. 
        O resultado é mostrado ao usuário até o número de termos especificado."
*/

#include <stdio.h>
int main(){
    long int memoria = 0, num1 = 0, num2 = 1, index;

    printf("Informe quantos numeros de fibonacci voce deseja ver:");
    scanf("%d", &index);

    for(int i = 0; i < index; i++){
        printf("%d, ", num1);
        memoria = num1 + num2;
        num1 = num2;
        num2 = memoria;
    }

    printf("\n");
    return 1;
}