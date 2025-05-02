#include <stdio.h>
int main(){
    float valor_original, percentual_de_desconto, desconto;
    printf("Informe o valor original do produto(R$): ");
    scanf("%f", &valor_original);
    printf("Informe o valor do desconto(%%): ");
    scanf("%f", &percentual_de_desconto);

    desconto = valor_original * (1-(percentual_de_desconto/100));
    printf("Valor do produto com desconto: R$%.2f\n", desconto);
    return 1;
}