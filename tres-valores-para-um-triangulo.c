#include <stdio.h>
#include <locale.h>

int main () {
    int A, B, C;

    setlocale(LC_ALL, "");
    printf("Digite o primeiro valor: ");
    scanf("%i", &A);
    printf("Digite o segundo valor: ");
    scanf("%i", &B);
    printf("Digite o terceiro valor: ");
    scanf("%i", &C);
    
    if ((A < B + C) && (B < A + C) && (C < A + B)) {
        printf("Temos um triângulo!\n");

        if ((A == B) && (B == C)) {
            printf("Equilátero\n");
        }
        else if ((A != B) && (B != C) && (A != C)) {
            printf("Escaleno\n");
        }
        else {
            printf("Isósceles\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

    return 0;
}