#include <stdio.h>
#include <stdlib.h>

/* Execício 17. Um trabalhador recebeu seu salário e depositou em sua contra corrente
bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo
atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38%
e o saldo inicial da conta está zerado*/

int main() {
    float salario, cheque1, cheque2;
    float saldo, cpmf1, cpmf2;

    printf("Informe o salário recebido: ");
    scanf("%f", &salario);

    printf("Informe o valor do primeiro cheque: ");
    scanf("%f", &cheque1);

    printf("Informe o valor do segundo cheque: ");
    scanf("%f", &cheque2);
    
    saldo = salario;
    
    cpmf1 = cheque1 * 0.0038;
    cpmf2 = cheque2 * 0.0038;
    
    saldo -= (cheque1 + cpmf1);
    saldo -= (cheque2 + cpmf2);
    
    printf("CPMF do primeiro cheque: R$ %.2f\n", cpmf1);
    printf("CPMF do segundo cheque: R$ %.2f\n", cpmf2);
    printf("Saldo final da conta: R$ %.2f\n", saldo);
    
return 0;    
}
    