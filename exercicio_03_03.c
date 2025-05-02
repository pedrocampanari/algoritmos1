#include <stdio.h>
int main(){
    float tempo, espaco;
    printf("Informe o tempo(s): ");
    scanf("%f", &tempo);
    printf("Informe o espaco(m): ");
    scanf("%f", &espaco);

    float vm = espaco/tempo;
    float a = vm/tempo;
    float d = vm * tempo;

    printf("Vm = %f m/s, a = %f m/s² e d = %fm\n", vm, a, d);
}