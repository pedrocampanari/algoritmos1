#include <stdio.h>

int main() {
    float a1, b1, c1;
    float a2, b2, c2;
    float x, y;
    float det, detX, detY;

    printf("Digite os coeficientes da primeira equação (a1, b1, c1): ");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Digite os coeficientes da segunda equação (a2, b2, c2): ");
    scanf("%f %f %f", &a2, &b2, &c2);

    det = a1 * b2 - a2 * b1;

    if (det == 0) {
        printf("O sistema não possui solução única.\n");
    } else {
        detX = c1 * b2 - c2 * b1;
        detY = a1 * c2 - a2 * c1;

        x = detX / det;
        y = detY / det;

        printf("Solução:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    return 0;
}