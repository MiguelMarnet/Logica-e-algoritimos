#include <stdio.h>
#include <stdlib.h>

/* Exercicio 6. Faça um programa que receba o salário-base de um funcionário, calcule e mostre o
salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o
salário-base e paga imposto de 7% sobre o salário-base. */

int main()
{
    char nome[50];
    float salario, receber;
    
    printf("Nome do funcionario: ");
    scanf("%s", &nome);
    printf("Qual o salario base: ");
    scanf("%f", &salario);
    
    // gratificação de 5% e imposto de 7%
    receber = salario + (salario * 0.05) - (salario * 0.07);

    printf("Funcionario %s, seu salario a receber é: %.2f\n", nome, receber);
    
    
return 0; 
}