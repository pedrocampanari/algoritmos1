#include <stdio.h>
int main(){
    int numero[4];
    printf("Informe seus numeros para o conjunto\n");
    for(int i = 0; i < 4; i++) {
        printf("numero%d: ", i+1);
        scanf("%d", &numero[i]);
    }
    printf("seus numeros são: { %d, %d, %d, %d }\n", numero[0], numero[1], numero[2], numero[3]);

    return 1;
}