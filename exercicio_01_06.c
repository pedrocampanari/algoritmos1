#include <stdio.h>

int main(){
    float reais, dolares, euros;
    printf("Informe os reais: ");
    scanf("%f", &reais);
    
    euros = reais * 0.16;
    dolares = reais * 0.18;

    printf("Dolar: %.2f$\nEuro: %.2f€\n", dolares, euros);
    return 1;
}