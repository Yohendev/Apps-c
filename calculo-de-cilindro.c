#include <stdio.h>
#include <locale>
#include <math.h>
#define PI 3.14

float r, h;

int main (){
    setlocale(LC_ALL, "");
	printf("Digite o raio:" );
	scanf("%f", &r);
	printf("Digite a altura:");
	scanf("%f", &h);
	printf("Área:%.2f\n Vol: %.2f",2*PI*r*(r+h), PI*pow(r,2)*h);
	return 0;
}