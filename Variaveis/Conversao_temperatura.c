#include <stdio.h>
#include <locale.h>

int main(){
    float temperatura;
    printf("Informe a temperatura em Celsius para converter para Fahrenheit: ");
    scanf("%f", &temperatura);

    printf("%.1fC em Fahreneit é: %.1fF", temperatura, (temperatura * 9 / 5) + 32);

    return 0;
}