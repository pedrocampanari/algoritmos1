#include <stdio.h>

int main () {
    int hi, mi, hf, mf;
    printf("Informe a hora de inicio\n");

    printf("H: ");
    scanf("%d", &hi);
    printf("M: ");
    scanf("%d", &mi);

    printf("Informe a hora final\n");
    printf("H: ");
    scanf("%d", &hf);
    printf("M: ");
    scanf("%d", &mf);
  

    printf("Hora de Inicio: %dh%dm, Hora Final: %dh%dm\n", hi, mi, hf, mf);
}