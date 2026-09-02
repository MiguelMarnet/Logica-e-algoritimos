#include <stdio.h>
#include <stdlib.h>
int main() {

/* Exercicio 14. Faça um programa que receba o ano de nascimento de uma pessoa e o
ano atual. Calcule e mostre:
a) A idade dessa pessoa.
b) Quantos anos essa pessoa terá em 2050. */
    
    char nome[50];
    float ano_n, ano_atual, idade, id2050;
    
    printf("Nome da pessoa: ");
    scanf("%s", &nome);

    printf("Ano de nascimento");
    scanf("%f", &ano_n);
    
    printf("Ano atual");
    scanf("%f", &ano_atual);
    
    system("clear");
    
    idade = (ano_atual - ano_n);
    
    printf("Sua idada e: %f \n", idade);
    
    id2050 = 2050 - ano_n;
    
    printf("Sua idada em 2025 e: %f \n", id2050);
}
    