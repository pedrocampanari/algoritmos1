#include <stdio.h>
int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(((numero % 2 == 0) && (numero % 3 == 0) && (numero % 5 == 0))){
        printf("%d / 2 = %d\n", numero, numero/2);
        printf("%d / 3 = %d\n", numero, numero/3);
        printf("%d / 5 = %d\n", numero, numero/5);
    } else{
        printf("Nao eh divisivel por 2, 3 e 5\n");
    }
    return 1;
}