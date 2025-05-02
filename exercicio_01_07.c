#include <stdio.h>

int main(){
    float x, y, z, volume;
    printf("Informe o comprimento(m): ");
    scanf("%f", &x);
    printf("Informe o largura(m): ");
    scanf("%f", &y);
    printf("Informe o altura(m): ");
    scanf("%f", &z);

    volume = x*y*z;
    printf("O volume desse retangulo eh: %.2fm³\n", volume);
    return 1;
}