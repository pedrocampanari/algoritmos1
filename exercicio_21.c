#include <stdio.h>

int main () {
    int numA, numB, divisao;
    printf("Informe os numeros: \n");
    printf("NumA: ");
    scanf("%d", &numA);
    printf("NumB: ");
    scanf("%d", &numB);

    divisao = numA / numB;

    if ((divisao % 2) == 0) {
        printf("Par\n");
    }else {
        printf("Impar\n");
    }

    return 1;
}

