#include <stdio.h>

int main(){
    int num1, num2;
    printf("Informe o numero A: ");
    scanf("%d", &num1);
    printf("Informe o numero B: ");
    scanf("%d", &num2);

    if (((num1 + num2) >= 10)){
        printf("A soma %d + %d = %d, ou seja eh maior ou igual a 10.", num1, num2, num1+num2);
    } else {
        printf("A soma %d + %d = %d, ou seja nao eh maior ou igual a 10.", num1, num2, num1+num2);
    }

    printf("\n\n\n");
    return 1;
}