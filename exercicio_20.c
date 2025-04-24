/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        Foram declaradas as variáveis (letra, cambio, alfabeto e ordenado). 
        Através das funções (printf e scanf), o usuário insere três letras, que 
        são armazenadas em um vetor.

        O vetor 'alfabeto' contém letras maiúsculas e minúsculas intercaladas, 
        servindo como base para comparar a ordem das letras. Um laço percorre 
        essas letras, identificando suas posições no alfabeto, e caso estejam fora de ordem, 
        realiza trocas utilizando a variável cambio.

        O processo de ordenação continua até que as letras estejam organizadas em ordem alfabética. 
        Ao final, o resultado é retornado ao usuário com as letras já ordenadas."
*/

#include <stdio.h>

int main() {
    char letra[3], cambio;
    
    char alfabeto[52] = {
        'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 
        'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 
        'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 
        'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'
    };

    printf("Informe a letra: ");
    scanf(" %c", &letra[0]);
    printf("Informe a letra: ");
    scanf(" %c", &letra[1]);
    printf("Informe a letra: ");
    scanf(" %c", &letra[2]);

    int ordenado;

    do {
        ordenado = 1;
        for (int i = 0; i < 2; i++) { 
            int pos1 = -1, pos2 = -1;
            for (int j = 0; j < 52; j++) {
                if (letra[i] == alfabeto[j])
                    pos1 = j;
                if (letra[i+1] == alfabeto[j])
                    pos2 = j;
            }
            if (pos1 > pos2) {
                cambio = letra[i];
                letra[i] = letra[i+1];
                letra[i+1] = cambio;
                ordenado = 0;
            }
        }
    } while (!ordenado);

    printf("\nResultado em ordem crescente: { %c, %c, %c }\n", letra[0], letra[1], letra[2]);

    return 0;
}
