#include <stdio.h>

int main() {
    int a, b;
    printf("Informe os numeros A e B\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    printf("(%d + %d)/2 = %d\n", a, b, (a+b)/2);
    return 1;
}