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

    printf("Informe o elemento desejado(linha coluna): ");
    scanf("%d %d", &n_linhas, &n_colunas);
    printf("A[%d][%d]: %d\n", n_linhas, n_colunas, matriz[n_linhas-1][n_colunas-1]);

    return 0;
}