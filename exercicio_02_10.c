#include <stdio.h>
int main(){
    float numeros[4], valor_limite, media;
    for(int i = 0; i < 4; i++){
        printf("Informe o numero%d: ", i+1);
        scanf("%f", &numeros[i]);
    }

    printf("Valor limite: ");
    scanf("%f", &valor_limite);

    media = (numeros[0] + numeros[1] + numeros[2] + numeros[3])/4;
    if (media > valor_limite){
        printf("Media: %f - Maior que %f\n", media, valor_limite);
    } else {
        printf("Media: %f - Menor que %f\n", media, valor_limite);
    }

    return 1;
}