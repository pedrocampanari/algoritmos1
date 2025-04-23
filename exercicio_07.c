#include <stdio.h>

int main() {
    int num1, num2, num3, num4, soma1, soma2, divisao;
    printf("Informe os dois numeros para soma. \nNum1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);

    printf("\nInforme mais dois numeros para soma. \nNum3: ");
    scanf("%d", &num3);
    printf("Num4: ");
    scanf("%d", &num4);


    soma1 = num1 + num2;
    soma2 = num3 + num4;
    divisao = soma1 / soma2;

    printf("\n\nResultado: (%d + %d)/(%d + %d) = %d\n", num1, num2, num3, num4, divisao);

    return 1;
}