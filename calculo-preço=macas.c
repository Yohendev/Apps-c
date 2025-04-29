#include <stdio.h>
#include <locale.h>

int main (){
    int valor;
    float preco, precototal;

    setlocale(LC_ALL,"");
    printf("Digite a quantidade de maçãs: ");
    scanf("%i", &valor);

    if (valor>=12) {
        preco = 0.25;
    }
    else{
        preco = 0.30;
    }

    precototal=preco*valor;
    printf("o valor da compra é %.2f.", precototal);

    return 0;
}
