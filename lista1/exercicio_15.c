#include <stdio.h>
int main(){
    int numero[2];
    float num_real;
    char letra[3];

    printf("Informe seus numeros inteiros\n");
    for(int i = 0; i < 2; i++) {
        printf("numero%d: ", i+1);
        scanf("%d", &numero[i]);
    }

    printf("Informe seu numero flutuante: ");
    scanf("%f", &num_real);

    printf("Informe Quatro Letras\n");
    for(int i = 0; i < 3; i++){
        printf("Letra%d: ", i+1);
        scanf(" %c", &letra[i]);
    }

    printf("Seus numeros inteiros são: { %d, %d }\n", numero[0], numero[1]);
    printf("Seu numero real eh: %f\n", num_real);
    printf("Essas foram as letras: %c, %c, %c\n", letra[0], letra[1], letra[2]);

    return 1;
}