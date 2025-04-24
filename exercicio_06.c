#include <stdio.h>
int main(){
    float numero[3];
    printf("Informe seus numeros\n");
    for(int i = 0; i < 3; i++) {
        printf("numero%d: ", i+1);
        scanf("%f", &numero[i]);
    }
    printf("Suas numeros são: { %f, %f, %f}\n", numero[0], numero[1], numero[2]);

    return 1;
}