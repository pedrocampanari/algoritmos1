#include <stdio.h>
int main() {
    int num, original, invertido = 0, resto;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    original = num; 

    while (num != 0) {
        resto = num % 10;
        invertido = invertido * 10 + resto;
        num /= 10;
    }

    if (original == invertido) {
        printf("E palindromo\n");
    } else {
        printf("Nao e palindromo\n");
    }

    return 1;
}