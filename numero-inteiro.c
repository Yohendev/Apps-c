#include <stdio.h>
#include <locale.h>
#define POL 2.54

float x, y, r;

int main (){
    setlocale(LC_ALL, "");
	printf("Digite um numero inteiro: ");
	scanf("%f", &x);
	printf("valor em cm é %.2f \nO valor em pol é %.3f ",x,x/POL);
	return 0;
}