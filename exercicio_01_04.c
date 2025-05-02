#include <stdio.h>

int main(){
    int numeroA, numeroB, cambio;
    printf("Informe o numeroA: ");
    scanf("%d", &numeroA);
    printf("Informe o numeroB: ");
    scanf("%d", &numeroB);

    cambio = numeroA;
    numeroA = numeroB;
    numeroB = cambio;

    printf("NumeroA: %d\nNumeroB: %d\n", numeroA, numeroB);
    return 1;
}