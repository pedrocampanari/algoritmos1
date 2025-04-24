/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        O programa solicita que o usuário insira um número do tipo float e 
        armazena esse valor na variável 'num'.

        O valor inserido é então 'tratado', ou seja, convertido para o tipo inteiro, 
        e o valor resultante da conversão é armazenado na variável 'num_tratado'. 
        Por fim, o número tratado é mostrado ao usuário."
*/

#include <stdio.h>
int main() {
    float num;
    int num_tratado;
    printf("Informe um float: ");
    scanf("%f", &num);

    num_tratado = num;
    printf("Numero tratado: %d\n", num_tratado);

    return 1;
}