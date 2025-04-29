#include <stdio.h>
#include <locale.h>

int main (){
    int valor;

    setlocale(LC_ALL,"")
    printf ("Digite um numero inteiro: ");
    scanf("%i", &valor);

    if(valor == 0){
        printf("O valor da variavel é nulo.");
    }
    else if (valor > 0){

    }
}