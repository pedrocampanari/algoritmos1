#include <stdio.h>
int main(){
    int forma;
    const float PI = 3.1495;
    float area, perimetro;

    do{
        printf("Escolha uma forma geometrica para calcular\n0 - Sair\n1 - Quadrado\n2 - Circulo\n3 - Triangulo Retangulo\nDigite: ");
        scanf("%d", &forma);
    }while((((forma != 1) && (forma != 2)) && (forma != 3)) && (forma !=0 ));

    if (forma == 1){
        float lado;
        printf("Informe um lado(m): ");
        scanf("%f", &lado);

        perimetro = lado*4;
        area = lado*lado;
    }

    if (forma == 2){
        float raio;
        printf("Informe o raio(m): ");
        scanf("%f", &raio);

        perimetro = 2* PI * raio;
        area = raio*raio*PI;
    }

    if (forma == 3) {
        float lado_a, lado_b, lado_c;
        printf("Informe os catetos(m)\nA: ");
        scanf("%f", &lado_a);
        printf("B: ");
        scanf("%f", &lado_b);
        printf("Hipotenusa: ");
        scanf("%f", &lado_c);

        perimetro = lado_a + lado_b + lado_c;
        area = (lado_a * lado_b)/2;
    }

    if (forma != 0){
        printf("Area: %.3fm², Perimetro: %.3fm\n", area, perimetro);
    }
    return 1; 
}