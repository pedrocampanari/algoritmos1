#include <stdio.h>
int main(){
    float nota;
    printf("Informe a nota(0-10): ");
    scanf("%f", &nota);

    if((nota >= 0) && (nota <= 2)){
        printf("Nota F\n");
    }
    if((nota > 2) && (nota <= 4)){
        printf("Nota D\n");
    }
    if((nota > 4) && (nota <= 6)){
        printf("Nota C\n");
    }
    if((nota > 6) && (nota <= 8)){
        printf("Nota B\n");
    }
    if((nota > 8) && (nota <= 10)){
        printf("Nota A\n");
    }
    if (!((nota >= 0) && (nota <= 10))){
        printf("Nota invalida\n");
    }

    return 1;
}