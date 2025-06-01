#include <stdio.h>
int main(){
    int n_linhas, n_colunas, menor = 0;
    printf("Informe a qtd de linhas: ");
    scanf("%d", &n_linhas);

    printf("Informe a qtd de colunas: ");
    scanf("%d", &n_colunas);

    int matriz[n_linhas][n_colunas];

    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) menor = matriz[i][j];
            if (matriz[i][j] <= menor){
                menor = matriz[i][j];
            }
        }
    }

    printf("O menor numero da matriz eh: %d\n", menor);
    return 0;
}