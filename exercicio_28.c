/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza a biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        O programa solicita que o usuário insira um número do tipo real (float) 
        através da função scanf, armazenando o valor na variável 'num'."
*/

#include <stdio.h>
int main(){
    float num;
    printf("Informe um real: ");
    scanf("%f", &num);

    return 1;
}