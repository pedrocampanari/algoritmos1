#include <stdio.h>

int main() {
    int inicio, fim, incremento;
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);
    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    if (incremento == 0) {
        printf("O incremento não pode ser zero.\n");
        return 1;
    }
    printf("Contagem personalizada:\n");

    if (inicio < fim) {
        for (int i = inicio; i <= fim; i += incremento) {
            printf("%d ", i);
        }
    } else {
        for (int i = inicio; i >= fim; i -= incremento) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 1;
}