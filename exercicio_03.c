/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(a, b, c). No próximo passo, 
        é utilizado as funções(printf e scanf) para coleta dos valores. Após, encerrará 
        o programa.
*/

#include <stdio.h>
int main() {
    int a, b, c;

    printf("\nInforme os valores a, b e c." );
    printf("\nA: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c); 


    return 1;
}
