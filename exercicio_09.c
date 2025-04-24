#include <stdio.h>
int main() {
    int altura, genero;
    printf("Informe sua altura(cm): ");
    scanf("%d", &altura);
    printf("Escolha a opção referente ao seu genero. \n1 - Masculino\n2 - Feminino\nDigite aqui ... ");
    scanf("%d", &genero);

    if (genero == 1) {
        printf("\nA sua altura eh %d, voce eh do genero masculino\n", altura);
    }
    else if (genero == 2) {
        printf("\nA sua altura eh %d, voce eh do genero feminino\n", altura);
    }else {
        printf("Opção inválida. Execute o programa novamente!\n\n");
        return 0;
    }
     
    return 1;
}