/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foram declaradas as variáveis(nome[20], genero[10] e altura). 
        No próximo passo, é utilizado as funções(printf, scanf, fgets) para coleta dos textos de 
        até 20(nome) e 10(genero) caracteres, depois a altura. Graças ao fgets é possível coletar
        strings com espaços pré-definidos. Após, retorna o nome, genero e altura."
*/


#include <stdio.h>
int main() {
    char nome[20], genero[10];
    int altura;

    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Informe seu genero: ");
    fgets(genero, sizeof(genero), stdin);

    printf("Informe seu altura(CM): ");
    scanf("%d", &altura);

    printf("\n\nSeu nome eh %sVoce eh do genero %s e Tem %d cm de altura\n\n", nome, genero, altura);


    return 1;
}