#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

float salario, comissao,vendas, salarioFinal;

int main (){
    setlocale(LC_ALL, "");
	printf("Digite o salario" );
	scanf("%f", &salario);
	printf("Digite a comissao:");
    scanf("%f", &comissao);
	printf("Digite o valor das vendas:");
	scanf("%f", &vendas);
    vendas*=comissao/100;
    salarioFinal=salario+(1+comissao/100);
	printf("Sálario:%.2f\nSálario Final: %.2f",salario, salarioFinal);
	return 0;
}