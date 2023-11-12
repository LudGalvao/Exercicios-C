#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;

    printf("Antes de troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    // Troca de valores sem variável temporária
    a = a + b; 
    b = a - b; 
    a = a - b;

    printf("Depois da troca: \n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}