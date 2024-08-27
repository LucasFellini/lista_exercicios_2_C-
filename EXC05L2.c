// 05) Verifique e mostre uma mensagem se a variável
//x for igual a 5 e se variável y for igual a 2 ou igual a 3.

#include <stdio.h>

int main () {

    int x, y;

    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de y: ");
    scanf("%d", &y);

    if (x == 5 && (y == 2 || y == 3))
    printf("X é igual a 5, e Y é igual a 2 ou Y é igual a 3");
}