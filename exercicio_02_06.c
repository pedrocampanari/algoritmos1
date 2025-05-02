#include <stdio.h>
int main(){
    float valor_original, percentual_de_aumento, aumento;
    printf("Informe o salario do funcionario(R$): ");
    scanf("%f", &valor_original);
    printf("Informe o valor do reajuste(%%): ");
    scanf("%f", &percentual_de_aumento);

    aumento = valor_original * (1+(percentual_de_aumento/100));
    printf("Valor do salario com reajuste: R$%.2f\n", aumento);

    return 1;
}