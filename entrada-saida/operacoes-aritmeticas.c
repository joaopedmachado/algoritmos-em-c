#include <stdio.h>
#include <stdlib.h>

int main() {
    float NUM1, NUM2;
    printf ("Digite o primeiro numero");
    scanf("%f", &NUM1);
    printf ("Digite o segundo numero");
    scanf("%f", &NUM2);
    printf("A soma foi: %.2f\n", NUM1 + NUM2);
    printf("A subtracao foi: %.2f\n", NUM1 - NUM2);
    printf("O produto foi: %.2f\n", NUM1 * NUM2);
    printf("A divisao foi: %.2f\n", NUM1 / NUM2);
    system("pause");
    return 0;
}
