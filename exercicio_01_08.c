#include <stdio.h>
int main(){
    float quilometros, litros, consumo;
    printf("Informe os quilometros rodados(km): ");
    scanf("%f", &quilometros);

    printf("Informe os litros consumidos(l): ");
    scanf("%f", &litros);

    consumo = quilometros/litros;
    printf("O seu consumo eh %.1fkm/l\n", consumo);

    return 1;
}