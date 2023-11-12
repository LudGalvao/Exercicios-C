#include <stdio.h>
#include <locale.h>

int main(){
    float num1, num2, num3;

    printf("Informe trẽs números para fazer a média: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("A média dos três números é: %.1f\n", (num1 + num2 + num3) / 3);

    return 0;
}