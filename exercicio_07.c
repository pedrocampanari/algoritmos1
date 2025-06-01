#include <stdio.h>
int main(){
    int n_linhas, n_colunas;
    printf("Informe a qtd de linhas: ");
    scanf("%d", &n_linhas);

    printf("Informe a qtd de colunas: ");
    scanf("%d", &n_colunas);

    int matriz[n_linhas][n_colunas];

    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int matriz_transposta[n_colunas][n_linhas];
    for(int i = 0; i < n_colunas; i++){
        for(int j = 0; j < n_linhas; j++){
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    printf("Matriz transposta: \n");
    for(int i = 0; i < n_colunas; i++){
        for(int j = 0; j < n_linhas; j++){
            printf("%d ", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}