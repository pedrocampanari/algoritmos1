#include <stdio.h>
int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    printf("\nTabuada:");
    for(int i = 0; i <= 10; i++){
        printf("\n%d x %d = %d", numero, i, numero*i);
    }
    
    printf("\n");
    return 1;
}