#include <stdio.h>
#include <stdlib.h>

/* Exercicio 9: Faça um programa que calcule e mostre a área de um triângulo. 
Sabe-se que: Área = (base * altura)/2. */

int main()
{
    
    float base, altura, area;
    
    printf("Qual a base do triangulo? ");
    scanf("%f", &base);
    
    printf("Qual a altura  do triangulo? ");
    scanf("%f", &altura);
    
    area = base * (altura/2);
    printf("A área do triangulo é: %.2f\n ", area);
    
    return 0;
}