#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
    float A, B,C,;
    float D;

    setlocale(LC_ALL, "");
    printf("Digite um número: ");
    scanf("%f", &A);
    printf("Digite outro número: ");
    scanf("%f", &B);
    printf("Digite mais um número");
    scanf("%f", &C);
    
    D = pow (B,2)-4*A*C;

    if(D == 0){
        x1 = B/(2*A);
        printf("x1 = x2 = %.2f", x1);
    }
    else if (D>0){
        x1 = (-B+sqrt(D)) /(2*A);
        x2 = (-B-sqrt(D)) / (2*A);
        printf ("x1 = %.2f", x1,x2);
    }


    return 0;
}