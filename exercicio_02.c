// 2 - Crie um algoritmo que identifique se a altura do usuário é maior ou menor da altura média

#include <stdio.h>
int main() {
    int altura, genero;
    printf("Informe sua altura(cm): ");
    scanf("%d", &altura);
    printf("Escolha a opção referente ao seu genero. \n1 - Masculino\n2 - Feminino\nDigite aqui ... ");
    scanf("%d", &genero);

    if (genero == 1) {
        if (altura > 175) {
            printf("\nA sua altura eh %d, entao voce esta acima da media nacional de 175cm\n", altura);
        }
        else{
            printf("\nA sua altura eh %d, entao voce nao esta acima da media nacional de 175cm\n", altura);
        }
    }
    else if (genero == 2) {
        if (altura > 162) {
            printf("\nA sua altura eh %d, entao voce esta acima da media nacional de 162cm\n", altura);
        }
        else {
            printf("\nA sua altura eh %d, entao voce nao esta acima da media nacional de 162cm\n", altura);
        }
    }else {
        printf("Opção inválida. Execute o programa novamente!\n\n");
        return 0;
    }
     
    return 1;
}