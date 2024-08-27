// 2) Faça um programa que receba dois números e
//mostre o maior.


#include <stdio.h> 

int main () {

    int x, y;
    
    printf("Informe o primeiro valor: ");
    scanf("%d", &x);
    printf("Informe o segundo valor: ");
    scanf("%d", &y);

    if (x > y)
    printf("X é maior %d", x);
    else 
    printf("Y é o maior %d", y);

}