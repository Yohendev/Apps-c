#include <stdio.h>
#include <locale.h>

int main (){
    int valor;

    setlocale(LC_ALL,"");
    printf ("Digite um numero inteiro: ");
    scanf("%i", &valor);

    if (valor&2!=0){
        printf("%i é impar.", valor);
    }
    else {
        printf("%i é par.", valor);
    };
    return 0;
}