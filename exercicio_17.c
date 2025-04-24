/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        Foram declaradas as variáveis (cambio, numeros e i). Através do uso das funções 
        (printf e scanf), o programa coleta 5 valores inteiros do usuário e os armazena em um vetor. 

        Em seguida, é utilizado um loop para ordenar os valores de forma crescente, 
        utilizando trocas entre elementos vizinhos com auxílio da variável cambio. 
        Por fim, os valores ordenados são retornados ao usuário."
*/

#include <stdio.h>

int main () {
    int cambio, numeros[5] = {};
    printf("Informe os numeros: \n");

    for(int i = 0; i < 5; i++) {
        printf("%d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    do {
        for(int i = 0; i < 5; i++){
            if (numeros[i] > numeros[i+1]){
                cambio = numeros[i+1];
                numeros[i+1] = numeros[i];
                numeros[i] = cambio;
            }
        }

    } while (!((numeros[0] <= numeros[1]) && (numeros[1] <= numeros[2]) && (numeros[2] <= numeros[3]) && (numeros[3] <= numeros[4])));
    
    printf("\n Resultado em ordem crescente: { %d, %d, %d, %d, %d }\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);        
    return 1;
}