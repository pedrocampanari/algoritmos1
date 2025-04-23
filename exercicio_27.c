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