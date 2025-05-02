#include <stdio.h>

int main() {
    int num, i, primo = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Não Primo\n");
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("Primo\n");
    } else {
        printf("Não Primo\n");
    }
    return 1;
}
