#include <stdio.h>
#include <locale.h>

int main (){
    int valor;

    setlocale(LC_ALL,"");
    printf ("Digite um numero inteiro: ");
    scanf("%i", &A);
    printf("Digite outro número inteiro");
    scanf("%i", &B);

    if (A==B)
    {
        printf("A - B - %d", A);
    }
    else {
        printf("os valores são diferentes!");

        if(A>B){
            printf("A(%i) > B(%i)", A,B);
        }
        else{
            printf("A(%i) < B(%i)", A,B);
        }
    }

   return 0;
}