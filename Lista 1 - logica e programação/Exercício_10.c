#include <stdio.h>
#include <stdlib.h>

/* 10. Faça um programa que calcule e mostre a área de um círculo. Sabe-se que:
Area= : Area= pi.r² */


int main()
{
    
    float r, pi, area;
    
    printf("Qual o raio do circulo? : ");
    scanf("%f", &r);

    system("clear");
    
    area = 3.14 * (r * r);
    
    printf("A área do circulo é: %.2f\n ", area);
    
    return 0;
}