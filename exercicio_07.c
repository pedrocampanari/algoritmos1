#include <stdio.h>
int main(){
    int numero[2];
    printf("Informe seus numeros\n");
    for(int i = 0; i < 2; i++) {
        printf("numero%d: ", i+1);
        scanf("%d", &numero[i]);
    }
    printf("Seus numeros são: { %d, %d }\n", numero[0], numero[1]);

    return 1;
}