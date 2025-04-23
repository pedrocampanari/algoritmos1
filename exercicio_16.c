#include <stdio.h>

int main () {
    float eixo_x, eixo_y, eixo_z;
    printf("Informe as dimensoes(x, y, z) em metros.\n");
    printf("Eixo X: ");
    scanf("%f", &eixo_x);
    printf("Eixo Y: ");
    scanf("%f", &eixo_y);
    printf("Eixo Z: ");
    scanf("%f", &eixo_z);

    printf("Suas dimensoes sao x:%f, y:%f, z:%f\n\n", eixo_x, eixo_y, eixo_z);
    return 1;
}