#include <stdio.h>
int main(){
    long int memoria = 0, num1 = 0, num2 = 1, index;

    printf("Informe quantos numeros de fibonacci voce deseja ver:");
    scanf("%d", &index);

    for(int i = 0; i < index; i++){
        printf("%d, ", num1);
        memoria = num1 + num2;
        num1 = num2;
        num2 = memoria;
    }

    printf("\n");
    return 1;
}