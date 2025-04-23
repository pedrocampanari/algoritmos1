#include <stdio.h>

int main () {
    float numA, numB;
    float resistencia;

    printf("Informe os numeros: \n");
    printf("NumA: ");
    scanf("%f", &numA);
    printf("NumB: ");
    scanf("%f", &numB);

    resistencia = 1/((1/numA) + (1/numB));

    printf("Req = %f ohms\n", resistencia);

    return 1;
}

