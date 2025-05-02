#include <stdio.h>
int main(){
    float notas[3], pesos[3], media;
    for(int i = 0; i < 3; i++){
        printf("Informe a nota %d: ", (i+1));
        scanf("%f", &notas[i]);
        printf("Informe o respectivo peso: ");
        scanf("%f", &pesos[i]);
    }

    media = ((notas[0]* pesos[0]) + (notas[1]* pesos[1]) + (notas[2]* pesos[2])) / (pesos[0] + pesos[1] + pesos[2]);
    printf("A media eh: %f\n", media);
    return 1;
}