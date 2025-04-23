#include <stdio.h>

int main () {
    float num1, num2;
    int x;

    printf("Informe dois valores.");
    printf("\nNum1:");
    scanf("%f", &num1);
    printf("Num2:");
    scanf("%f", &num2);

    x = num1 * num2;
    printf("Resultado: %d\n", x);
    return 1;
}