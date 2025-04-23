#include <stdio.h>
int main() {
    int num; 
    printf("Informe um numero: ");
    scanf("%d", &num);

    if ((num % 2) == 0) {
        printf("\nEle eh par!");
    } else {
        printf("\nEle eh impar!");
    }

    printf("\n\n");
    return 1;
}