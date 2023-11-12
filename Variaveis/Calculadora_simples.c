#include <stdio.h>
#include <locale.h>

int main(){
    float a, b;

    printf("Escreva os dois números para fazer os calculos: ");
    scanf("%f %f", &a, &b);

    printf("soma: %.1f\n", a + b);
    printf("subtração: %.1f\n", a - b);
    printf("multiplicação: %.1f\n", a * b);
    printf("divisão: %.1f\n", a / b);

    return 0;
}