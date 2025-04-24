/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza duas bibliotecas essenciais (stdio e stdlib), 
        sendo stdio.h usada para coletar e mostrar resultados ao cliente, 
        e stdlib.h para gerar números aleatórios. O programa pede ao usuário para escolher 
        6 números entre 0 e 25.

        Para cada número inserido, o código valida se o número está dentro do intervalo 
        permitido. Em seguida, um número aleatório é sorteado entre 0 e 24 (usando rand() % 25). 
        Se o número sorteado coincidir com algum dos números inseridos, o programa informa 
        ao usuário que ele foi sorteado. Caso contrário, ao final, o programa informa que o usuário 
        não foi sorteado."
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int numeros[6], numero_sorteado;
    float num_rand = rand();

    printf("Escolha 6 numeros (0-25)\n");
    for (int i = 0; i < 6; i++)
    {
        do {
            printf("%d: ", i+1);
            scanf("%d", &numeros[i]);
            if (((numeros[i] < 0) || (numeros[i] > 25))){
                printf("Digito invalido!\n");
            }
        }while (!((numeros[i]>= 0) && (numeros[i]<=25)));

        numero_sorteado = rand() % 25;
        if ((numeros[i] == numero_sorteado)){
            printf("Parabens o numero %d foi sorteado!\n", numero_sorteado);
            return 1;
        }
    }

    printf("Que azar! Voce nao foi sorteado.\n");
    return 1;
}