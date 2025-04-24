/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foi declarado a variável num. No próximo passo, é utilizado 
        as funções(printf, scanf) para coleta do num. Em seguida, é feito uma operação(num%2) e
        verificado o resto para validar se é impar ou par. Após, retorna o resultado."
*/

#include <stdio.h>
int main() {
    int num; 
    printf("Informe um numero: ");
    scanf("%d", &num);

    if ((num % 2) == 0) {
        printf("\nEle eh par!");
    } else {
        printf("\nEle eh impar!");
    }

    printf("\n\n");
    return 1;
}