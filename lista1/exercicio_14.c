#include <stdio.h>
int main(){
    char letra[4];
    printf("Informe Quatro Letras\n");
    for(int i = 0; i < 4; i++){
        printf("Letra%d: ", i+1);
        scanf(" %c", &letra[i]);
    }
    printf("Essas foram as letras: %c, %c, %c, %c\n", letra[0], letra[1], letra[2], letra[3]);
    return 1;
}