#include <stdio.h>

int main(){
    int segundos;
    printf("Informe os segundos(s): ");
    scanf("%d", &segundos);

    int horas = segundos/60/60;
    int minutos = (segundos/60)%60;
    segundos = segundos - ((horas*60*60) + (minutos*60));
        
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 1;
}