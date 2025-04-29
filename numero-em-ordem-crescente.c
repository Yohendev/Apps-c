#include <stdio.h>
#include <locale.h>


int main (){
    int A,B,C, aux;

    setlocale(LC_ALL,"");
    printf("Digite o primeiro valor: ");
    scanf("%i", &A);
    printf("Digite o segundo valor: ");
    scanf("%i", &B);
    printf("Digite o terceiro valor: ");
    scanf("%i", &C);
    
    if (A > B){
        aux = A;
        A = B;
        B = aux;
    }
    if (A > B){
        aux =A;
        A = C;
        C = aux;
    }
    if (B > C){
        aux = B;
        B = C;
        C = aux;
    }

    printf("Valores em ordem crescente: %d %d %d",A,B,C);

return 0;
}