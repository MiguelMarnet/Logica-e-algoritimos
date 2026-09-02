#include <stdio.h>
#include <stdlib.h>
int main() {

/* Exercicio 4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
salário, sabendo-se que este sofreu um aumento de 25% */
    
    char nome[50];
    float salario, bonus;
    
    printf("Nome do funcionario: ");
    scanf("%s", &nome);
    printf("Qual o salario recebe: ");
    scanf("%f", &salario);
    
    bonus = salario * 1.25;
    

    printf("Seu salário com bônus de 25% é:  %.2f\n", bonus);
   
    
}
    