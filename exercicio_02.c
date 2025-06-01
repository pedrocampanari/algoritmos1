#include <stdio.h>
int main(){
    int n_linhas, n_colunas, soma = 0;
    printf("Informe a qtd de linhas: ");
    scanf("%d", &n_linhas);

    printf("Informe a qtd de colunas: ");
    scanf("%d", &n_colunas);

    int matriz[n_linhas][n_colunas];

    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    int media = soma/(n_linhas * n_colunas);

    printf("A media dos elementos da matriz eh: %d\n", media);
    return 0;
}