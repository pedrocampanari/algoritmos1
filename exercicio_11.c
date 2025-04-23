#include <stdio.h>
int main () {
    int num1, num2, divisao;

    printf("Informe dois numeros.\n");
    printf("Num1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    divisao = num1 / num2;
    printf("\nO resultado é: %d / %d = %d\n\n", num1, num2, divisao);

    return 1;
}