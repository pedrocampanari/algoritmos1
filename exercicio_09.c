#include <stdio.h>

int main() {
    int n, i, j, simetrica = 1;

    printf("Digite a ordem da matriz (n x n): ");
    scanf("%d", &n);

    int matriz[n][n];  
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0;
                break;
            }
        }
        if (!simetrica) break;
    }

    if (simetrica){
        printf("A matriz eh simetrica.\n");
    }else {
        printf("A matriz NAO eh simetrica.\n");
    }

    return 0;
}