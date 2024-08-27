// 04) Verifique e mostre uma mensagem se a variável
// x estiver entre 5 e 10.

#include <stdio.h>


int main (){

    int x;

    printf("Informe o valor de x: ");
    scanf("%d", &x);

    if (x > 5 && x < 10)
    printf("X está dentro");
    else
    printf("X está fora");

}