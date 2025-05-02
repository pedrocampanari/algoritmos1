#include <stdio.h>

int main(){
    float peso, altura, IMC;

    printf("Informe sua peso(kg): ");
    scanf("%f", &peso);
    printf("Informe sua altura(m): ");
    scanf("%f", &altura);

    IMC = peso / (altura*altura);
    printf("Seu IMC é: %-10.2f\n", IMC);

    return 1;
}