#include <stdio.h>
#include <locale.h>

int main(){
    float raio;
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    float area = 3.14 * raio * raio;
    printf("A area do circulo é: %.1f", area);

    return 0;
}