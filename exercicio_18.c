#include <stdio.h>

int main () {
    char palavra[20], palavraComVogalE[20];
    printf("Informe uma palavra ate 20 caracteres: ");
    fgets(palavra, sizeof(palavra), stdin);

    for (int i = 0; i < 20; i++){
        palavraComVogalE[i] = palavra[i];
        if ((palavra[i] == 'o' ) || palavra[i] == 'O'){
            palavraComVogalE[i] = 'e';
        }
    }
    
    printf("Resultado: %s\n\n", palavraComVogalE);
    return 1;
}