#include <stdio.h>

int main(){
    float celsius, fahrenheit, kelvin;
    printf("Informe a temperatura em °C: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f°F\nKelvin: %.2fK\n", fahrenheit, kelvin);
    return 1;
}