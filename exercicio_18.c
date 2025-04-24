/*
    Instituto Federal de Mato Grosso do Sul
    Curso: Engenharia de Computação
    Unidade curricular: Algoritmos I
    Nome: Pedro Henrique Oliveira Campanari
    E-mail: pedro.campanari@estudante.ifms.edu.br
    Data: 24/04/2025

    Explicação: "Este código utiliza uma biblioteca essencial (stdio), 
        sendo stdio.h utilizada para coletar e mostrar resultados ao cliente. 
        Foram declaradas duas variáveis do tipo vetor de caracteres (palavra e palavraComVogalE). 
        Através da função fgets, o usuário insere uma palavra de até 20 caracteres.

        Em seguida, um loop percorre a palavra original e copia cada letra para a nova variável. 
        Caso encontre a letra 'o' ou 'O', essa letra é substituída por 'e'. 
        Por fim, a nova palavra modificada é retornada ao usuário."
*/

#include <stdio.h>

int main () {
    char palavra[20], palavraComVogalE[20];
    printf("Informe uma palavra ate 20 caracteres: ");
    fgets(palavra, sizeof(palavra), stdin);

    for (int i = 0; i < 20; i++){
        palavraComVogalE[i] = palavra[i];
        if ((palavra[i] == 'o' ) || palavra[i] == 'O'){
            palavraComVogalE[i] = 'e';
        }
    }
    
    printf("Resultado: %s\n\n", palavraComVogalE);
    return 1;
}