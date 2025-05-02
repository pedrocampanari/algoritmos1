#include <stdio.h>

int main() {
    int decimal;
    char hexadecimal[20];

    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    printf("Binário: ");
    int bin[32], i = 0;
    int temp = decimal;
    if (temp == 0) {
        printf("0");
    } else {
        while (temp > 0) {
            bin[i] = temp % 2;
            temp /= 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", bin[j]);
        }
    }

    printf("\nHexadecimal: %X\n", decimal);
    return 1;
}