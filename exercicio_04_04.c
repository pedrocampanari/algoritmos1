#include <stdio.h>
int main(){
    int numero, fatorial = 1;
    printf("Informe um numero: ");
    scanf("%d", &numero);

    printf("%d! = ", numero);
    for(int i = numero; i > 0; i--){
        fatorial = fatorial * i;
        printf(".%d", i);
    }

    printf(" = %d\n", fatorial);
    return 1;
}