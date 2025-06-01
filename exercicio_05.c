#include <stdio.h>
int main(){
    int n_linhas, n_colunas;
    printf("Informe a qtd de linhas: ");
    scanf("%d", &n_linhas);

    printf("Informe a qtd de colunas: ");
    scanf("%d", &n_colunas);

    int matriz_A[n_linhas][n_colunas];
    int matriz_B[n_linhas][n_colunas];
    int matriz_soma[n_linhas][n_colunas];

    printf("Elementos Matriz A:\n");
    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            scanf("%d", &matriz_A[i][j]);
        }
    }
    printf("Elementos Matriz B:\n");
    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            scanf("%d", &matriz_B[i][j]);
        }
    }

    printf("Resultado da soma de matrizes: \n");
    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            matriz_soma[i][j] = matriz_A[i][j] + matriz_B[i][j];
            printf("%d ", matriz_soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}