#include <stdio.h>	
#include <stdlib.h>

/* Exercicio 2. Faça um programa que receba três notas, calcule e mostre a média aritmética entre
elas*/

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA média aritmética das três notas é: %.2f\n", media);

    return 0;
}