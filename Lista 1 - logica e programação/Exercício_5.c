#include <stdio.h>
#include <stdlib.h>
int main() {
    
/* Exercicio 5. Faça um programa que receba o salário de um funcionário e o percentual de
aumento, calcule e mostre o valor do aumento e o novo salário */
    
    char nome[50];
    float salario, percentual, aumento, bonus;
    
    printf("Nome do funcionario: ");
    scanf("%s", &nome);
    printf("Qual o salario recebe: ");
    scanf("%f", &salario);
    printf("Qual o aumento em percentual recebeu?  ");
    scanf("%f", &percentual);
    
    system("clear");
    
    aumento = (percentual/100) * salario;
    bonus = salario * (1 + percentual/100 );
    
    printf("O valor do aumento é:  %.2f\n", aumento);
    printf("Seu salário com aumento é:  %.2f\n", bonus);
   
    
}
    