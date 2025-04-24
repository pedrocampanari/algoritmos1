#include <stdio.h>

int main (){
    int ano;
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &ano);

    int idade = 2025 - ano;
    int idadeDias = idade * 365 + idade / 4; 
    
    printf("Voce tem aproximadamente %d dias de idade.\n", idadeDias);
    return 1;
}