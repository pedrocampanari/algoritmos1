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
