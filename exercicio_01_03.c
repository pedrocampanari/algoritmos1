#include <stdio.h>

int main(){
    float raio, area;
    const float PI = 3.14159;

    printf("Informe o raio(m): ");
    scanf("%f", &raio);

    area = PI*(raio*raio);
    printf("Area: %.2fm²\n", area);
    return 1;
}