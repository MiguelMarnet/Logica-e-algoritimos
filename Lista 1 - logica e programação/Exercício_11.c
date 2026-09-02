#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 11. Faça um programa que receba um número positivo e maior que zero,
calcule e mostre:
a) O número digitado ao quadrado.
b) O número digitado ao cubo.
c) A raiz quadrada do número digitado.
d) A raiz cúbica do número digitado.*/

int main(){
    float n;

    printf("Escreva um número positivo e maior que zero: ");
    scanf("%f", &n);

    if (n <= 0) {
        printf("Numero invalido, deve ser maior que zero. \n");
    } 
    else {
        printf("O quandrado do número é: %2.f\n", n * n);
        printf("O cubo do número é: %2.f\n", n * n * n);
        printf("A raiz quadrada do número é: %0.2f\n", sqrt(n));
        printf("A raiz cubica do número é: %0.2f\n", cbrt(n));
    }
        return 0;
}