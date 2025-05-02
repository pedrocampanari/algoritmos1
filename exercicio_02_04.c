#include <stdio.h>
#include <tgmath.h>
#include <math.h>


int main() {

    float a, b, c;
    float delta, x1, x2;

    printf("\nInforme os valores a, b e c para formula de Bhaskara." );
    printf("\nA: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c); 

    if ((a != 0)) {
        delta = (pow(b, 2)) - (4*a*c);
        if (delta >= 0) {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Os valores de x1 e x2 sao respectivamente: { %f, %f }", x1, x2);
        } else {
            printf("Nao existem raizes reais");
        }

    } else {
        printf("Impossivel calcular a formula com A == 0. Execute novamente!\n");
        return 0;
    }
    
    return 1;
}