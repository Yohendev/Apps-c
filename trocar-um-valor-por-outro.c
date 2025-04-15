#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

float A,B, aux;

int main (){
    setlocale(LC_ALL, "");
	printf("Digite A: " );
	scanf("%f", &A);
	printf("Digite B: ");
    scanf("%f", &B);
	printf("VALOR Antigo:\nA: %.2f\nB:%.2f\n",A,B);
    aux = A; 
    A=B;
    B=aux;
	printf("VALOR Novo:\nA: %.2f\nB:%.2f",A,B);
	return 0;
}