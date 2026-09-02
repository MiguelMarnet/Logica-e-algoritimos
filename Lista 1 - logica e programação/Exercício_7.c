#include <stdio.h>
#include <stdlib.h>

/* Exercicio 7. Faça um programa que receba o salário-base de um funcionário, calcule e
mostre seu salário a receber, Sabendo-se que esse funcionário tem gratificação de R$
50,00 e paga imposto de 10% sobre o salário-base.*/

int main()
{
    char nome[50];
    float salario, receber;
    
    printf("Nome do funcionario: ");
    scanf("%s", &nome);
    printf("Qual o salario base: ");
    scanf("%f", &salario);
    
    // gratificação de 5% e imposto de 7%
    receber = salario + 50 - (salario * 0.1);

    printf("Funcionario %s, seu salario a receber é: %.2f\n", nome, receber);
    
return 0; 
}