#include <stdio.h>
#include <locale.h>

int main (){
    int valor;

    setlocale(LC_ALL,"");
    printf ("Digite um numero inteiro: ");
    scanf("%i", &valor);

    if(valor >= 0){
        printf("o valor digitado é positivo: %i", valor);
    }

    else{
        valor*=-1;
        printf("o valor digitado é negativo e precisou de tratamento: %i", valor);
    }

    return 0;
}