#include <stdio.h>
#include <stdlib.h>

/* Exercicio 8. Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
calcule e mostre o valor do rendimento e o valor total depois do rendimento.*/

int main()
{
    float deposito, juros, rendimento, final;
    
    printf("Qual valor gostaria de depositar ? ");
    scanf("%f", &deposito);
    printf("Qual valor da taxa de juros ? ");
    scanf("%f", &juros);
    
    system("clear");
    
    rendimento = deposito * (juros/100);

    printf("O valor do rendimento é: %.2f\n", rendimento);
  
    
    final = deposito + rendimento;

    printf("O valor final do investimento é: %.2f\n", final);


return 0;    
}
    