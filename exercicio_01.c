#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    printf("\nInsira os lados do triangulo! ");
    printf("\nLado A: ");
    scanf("%d", &a);
    printf("Lado B: ");
    scanf("%d", &b);
    printf("Lado C: ");
    scanf("%d", &c);

    if (abs(b - c) < a) {
        if ((a == b) && (b == c)) {
            printf("eh equilatero\n");
            return 1;
        }
        
        if ((a == b) || (a == c) || (b == c)) {
            printf("eh isoceles\n");
            return 1;
        }

        if ((a != b) && (a != c) && (b != c)) {
            printf("eh escaleno\n");
            return 1;
        }
    }
    else {
        printf("Nao eh um triangulo\n");
        return 0;
    }
}
