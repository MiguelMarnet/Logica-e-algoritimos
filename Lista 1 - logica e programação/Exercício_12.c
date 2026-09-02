#include <stdio.h>

/* 12. Faça um programa que receba dois números maiores que zero,
   calcule e mostre um elevado ao outro. */

int main() {
    int base, expoente;
    int resultado;

    while (1) {
        printf("Escreva o primeiro número positivo e maior que zero: ");
        scanf("%d", &base);

        printf("Escreva o segundo número positivo e maior que zero: ");
        scanf("%d", &expoente);

        if (base <= 0 || expoente <= 0) {
            printf("Número inválido, deve ser maior que zero.\n\n");
        } else {
            resultado = 1;
            for (int i = 1; i <= expoente; i++) {
                resultado = resultado * base;
            }
            printf("%d elevado a %d é: %d\n", base, expoente, resultado);
            break;
        }
    }

    return 0;
}
