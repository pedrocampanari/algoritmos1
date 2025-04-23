#include <stdio.h>
int main(){
    int numero[10];
    printf("Informe seus numeros\n");
    for(int i = 0; i < 10; i++) {
        printf("numero%d: ", i+1);
        scanf("%d", &numero[i]);
    }
    printf("Seus numeros são: { %d, %d, %d, %d, %d, %d, %d, %d, %d, %d }\n", numero[0], numero[1], numero[2], numero[3], numero[4], numero[5], numero[6], numero[7], numero[8], numero[9]);

    return 1;
}