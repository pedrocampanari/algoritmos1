#include <stdio.h>

float potencia(float base, float expoente){
    float resultado = base;
    for(int i = 1; i < expoente; i++){
        resultado = resultado * base;
    }
    if(expoente == 0){
        resultado = 1;
    }
    return resultado;
}

int main(){
    float valor_inicial, taxa, tempo, montante;
    printf("Informe o valor inicial: ");
    scanf("%f", &valor_inicial);
    printf("Informe a taxa(+%%/-%%): ");
    scanf("%f", &taxa);
    printf("Informe o tempo: ");
    scanf("%f", &tempo);
    
    montante = valor_inicial * potencia(1+(taxa/100), tempo);
    printf("Montante final: %f\n", montante);
    return 1;
}