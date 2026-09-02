#include <stdio.h>
#include <stdlib.h>
int main() {
    
/* Exercicio 3. Faça um programa que receba três notas e seus respectivos pesos, calcule e
mostre a média ponderada dessas notas. */
    
    float n1, n2, n3, p1, p2, p3, media;
    
    printf("Escreva nota 1: ");
    scanf("%f", &n1);
    printf("Qual o peso da nota 1: ");
    scanf("%f", &p1);
    
    printf("Escreva nota 2: ");
    scanf("%f", &n2); 
    printf("Qual o peso da nota 2: ");
    scanf("%f", &p2);
    
    printf("Escreva nota 3: ");
    scanf("%f", &n3); 
    printf("Qual o peso da nota 3: ");
    scanf("%f", &p3);
    

    media = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
    
    printf("Sua média final é: %.2f\n", media);
    
    return 0;
}