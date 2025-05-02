#include <stdio.h>

int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if ((numero % 2) == 0){
        printf("Par\n", numero);
    }
    if ((numero % 2) != 0){
        printf("Impar\n");
    }

    return 1;
}