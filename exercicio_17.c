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