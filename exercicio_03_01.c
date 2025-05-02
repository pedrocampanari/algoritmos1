#include <stdio.h>
int main(){
    int x;
    printf("Informe a variavel x: ");
    scanf("%d", &x);

    printf("x+=1 = %d\n", x+=1);
    printf("x-=2 = %d\n", x-=2);
    return 1;
}