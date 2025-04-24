/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        Foram declaradas as variáveis (idade, sexo, def e nacionalidade). 
        O código solicita ao usuário sua idade, e, se maior de 18 anos, pergunta o sexo 
        e a nacionalidade, considerando regras específicas para o alistamento militar.

        Para homens brasileiros, o alistamento é obrigatório, enquanto para homens de 
        outras nacionalidades e mulheres, o alistamento não é obrigatório. O código 
        também valida a entrada de sexo e responde de acordo com a informação fornecida."
*/

#include <stdio.h>

int main() {
    int idade, sexo, def;
    char nacionalidade[10];

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if ((idade >= 18)){
        printf("Informe seu sexo: \n1 - Masculino\n2 - Feminino\nDigite aqui ... ");
        scanf("%d", &sexo);
        if ((sexo == 1)){
            printf("Informe sua nacionalidade (Para brasileiros digite 1): ");
            scanf("%s", &nacionalidade);
            if ((nacionalidade[0] == '1')){
                printf("Alistamento obrigatorio para homem brasileiros!");
            } else {
                printf("Alistamento nao obrigatorio para homens %s!", nacionalidade);
            }
        }
        if ((sexo == 2)){
            printf("O alistamento nao eh obrigatorio para mulheres!");
        }
        if (((sexo != 1) && (sexo !=2))){
            printf("Voce digitou um numero invalido");
        }

    } else {
        printf("Voce não está apto ao alistamento militar obrigatorio");    
    }

    printf("\n\n\n");
    return 1;
}