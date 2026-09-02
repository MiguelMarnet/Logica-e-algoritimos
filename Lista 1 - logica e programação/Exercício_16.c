#include <stdio.h>
#include <stdlib.h>

/* 16. Faça um programa que receba o número de horas trabalhadas e o valor
do salário mínimo. Calcule e mostre o salário a receber seguindo as regras
abaixo:
a) A hora trabalhada vale a metade do salário mínimo;
b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
c) O imposto equivale a 3% do salário bruto.
d) O salário a receber equivale ao salário bruto menos o imposto.*/

int main() {
    float salario_minimo, horas_trabalhadas, valor_horas, imposto, salario_bruto, salario_receber;
    
    printf("Qual valor do salário minimo? : ");
    scanf("%f", &salario_minimo);
    
    printf("Quantas horas você trabalhou? : ");
    scanf("%f", &horas_trabalhadas);
    
    
    system("clear");
    
    valor_horas = salario_minimo /2;
    salario_bruto= valor_horas * horas_trabalhadas;
    imposto = salario_bruto * 0.03;
    salario_receber = salario_bruto - imposto;
    
  

    printf("Valor da hora trabalhada: R$ %.2f\n", valor_horas);
    printf("Salário bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto (3%%): R$ %.2f\n", imposto);
    printf("O salario a receber e :R$ %.2f\n",  salario_receber);

return 0;    
}
    