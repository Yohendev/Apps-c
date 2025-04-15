#include <stdio.h>
#include <locale>
#include <math.h>
#define PI 3.14

float x, y, r;

int main (){
    setlocale(LC_ALL, "");
	printf("Digite o raio:" );
	scanf("%f", &x);


	printf("valor da area do circulo é: %.2f",PI*pow(x,2));
	return 0;
}