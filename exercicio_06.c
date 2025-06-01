#include <stdio.h>
int main() {
    int i, j, k;
    int linhasA, colunasA, linhasB, colunasB;

    printf("Digite o número de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Digite o número de colunas da matriz A: ");
    scanf("%d", &colunasA);

    printf("Digite o número de linhas da matriz B: ");
    scanf("%d", &linhasB);
    printf("Digite o número de colunas da matriz B: ");
    scanf("%d", &colunasB);

    int A[linhasA][linhasA];
    int B[linhasB][linhasB];

    if (colunasA != linhasB) {
        printf("Erro: o número de colunas de A deve ser igual ao número de linhas de B.\n");
        return 1;
    }

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < linhasB; i++) {
        for (j = 0; j < colunasB; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    int C[linhasA][colunasB];
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasB; j++) {
            C[i][j] = 0;
        }
    }

    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasB; j++) {
            for (k = 0; k < colunasA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriz resultado (A x B):\n");
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasB; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}