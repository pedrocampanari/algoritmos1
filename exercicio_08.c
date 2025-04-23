#include <stdio.h>
int main() {
    char nome[20], genero[10];
    int altura;

    printf("Informe seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Informe seu genero: ");
    fgets(genero, sizeof(genero), stdin);

    printf("Informe seu altura(CM): ");
    scanf("%d", &altura);

    printf("\n\nSeu nome eh %sVoce eh do genero %s e Tem %d cm de altura\n\n", nome, genero, altura);


    return 1;
}