#include <stdio.h>

int main() {
    int a, b;
    printf("Informe os numeros A e B\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    printf("divisao inteira eh = %d\n", (a%b));
    return 1;
}