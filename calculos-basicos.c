#include <stdio.h>
#include <locale.h>

int main () {
    int A, B, op;

    setlocale(LC_ALL, "");
    printf("Digite o primeiro valor: ");
    scanf("%i", &A);
    printf("Digite o segundo valor: ");
    scanf("%i", &B);
    printf("Digite a operação: 1-SOMA / 2-SUBTRAÇÃO / 3-PRODUTO / 4-DIVISÃO\n");
    scanf("%i", &op);
    
    switch (op)
    {
        case 1:
            printf("O valor da soma de %i e %i é %i\n", A, B, A + B);
            break;
        case 2:
            printf("O valor da subtração de %i e %i é %i\n", A, B, A - B);
            break;
        case 3:
            printf("O valor do produto de %i e %i é %i\n", A, B, A * B);
            break;
        case 4:
            if (B != 0) {
                printf("O valor da divisão de %i por %i é %i\n", A, B, A / B);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operação não cadastrada.\n");
    }

    return 0;
}
