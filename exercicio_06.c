#include <stdio.h>

int main() {
    int num1, num2, soma;
    printf("Informe os dois numeros para soma. \nNum1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("\n\nA soma: %d + %d = %d\n", num1, num2, soma);

    return 1;
}