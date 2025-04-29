#include <stdio.h>
#include <locale.h>

int main (){
    int A, B;

    setlocale(LC_ALL,"");

    printf("Digite um número inteiro: ");
    scanf("%i", &A);

    printf("Digite outro número inteiro: ");
    scanf("%i", &B);

    if (A == B) {
        printf("A - B - %d\n", A);
    } else {
        printf("Os valores são diferentes!\n");

        if (A > B) {
            printf("A(%i) > B(%i)\n", A, B);
        } else {
            printf("A(%i) < B(%i)\n", A, B);
        }
    }

    return 0;
}
