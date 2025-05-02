int main(){
    float a, b, c;

    printf("\nInsira os lados do triangulo! ");
    printf("\nLado A: ");
    scanf("%d", &a);
    printf("Lado B: ");
    scanf("%d", &b);
    printf("Lado C: ");
    scanf("%d", &c);

    if (((((abs(b - c) < a) && (b + c > a)) && ((abs(a - c) < b) && (a + c > b))) && ((abs(a - b) < c) && (a + b > c)))){
        printf("Pode formar triângulo\n");
    } else {
        printf("Não pode formar triângulo\n");
        return 0;
    }
}