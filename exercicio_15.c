#include <stdio.h>

int main () {
    int num_digitado, status_num, media, x = 0, i = 0;

    printf(" Digite alguns numeros.\n");
    do {
        printf(" Num%d: ", i+1);
        status_num = scanf("%d", &num_digitado);

        if(status_num){
            x = num_digitado + x;
            i++;
        }
    
    } while (status_num);

    media = x/i;
    printf(" Resultado da media é %d\n", media);

    return 1;
}