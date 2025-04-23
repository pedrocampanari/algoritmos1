#include <stdio.h>

int main () {
    char letras[27];
    printf("Voce pode escrever ate 27 digitos!: ");
    fgets(letras, sizeof(letras), stdin);

    printf("\nOlha o que voce escreveu: %s\n\n", letras);

    return 1;
}