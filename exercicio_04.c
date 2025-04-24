/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(ano_inicial e ano_final). 
        No próximo passo, é utilizado as funções(printf e scanf) para coleta do ano inicial 
        e o ano final, para criar um intervalo. Após, o intervalo é percorrido pelo for,
        e retornando apenas os anos que são considerados bissextos."
*/

#include <stdio.h>

int main(){
    int ano_inicial, ano_final;
    printf("Informe o ano incial: ");
    scanf("%d", &ano_inicial);
    printf("Informe o ano final: ");
    scanf("%d", &ano_final);
  
    for (int i = ano_inicial; i <= ano_final; i++) {
        if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
            printf("\n%d eh um ano bissexto!", i);
        }
    }
    printf("\n\n");
    return 1;
}