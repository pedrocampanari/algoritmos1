/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 23/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial(stdio), 
        Sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. Ao 
        decorrer do código, foi declarado a variável letras[27]. No próximo passo, é 
        utilizado a função fgets para coleta do texto de até 27(letras) caracteres. 
        Em seguida, te mostra o que você escreveu."
*/

#include <stdio.h>

int main () {
    char letras[27];
    printf("Voce pode escrever ate 27 digitos!: ");
    fgets(letras, sizeof(letras), stdin);

    printf("\nOlha o que voce escreveu: %s\n\n", letras);

    return 1;
}