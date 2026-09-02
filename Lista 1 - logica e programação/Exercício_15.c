#include <stdio.h>
#include <stdlib.h>

/* Exercicio 15. O custo ao consumidor de um carro novo é a soma do preço de fábrica
com o percentual de lucro do distribuidor e dos impostos aplicados ao preço
de fábrica. Faça um programa que receba o preço de fábrica de um veículo,
o percentual de lucro do distribuidor e o percentual de impostos. Calcule e
mostre:
a) O valor correspondente ao lucro do distribuidor;
b) O valor correspondente aos impostos.
c) O preço final do veículo.
*/

int main() {
    float valor, lucro_p, lucro, imposto, imposto_c, final;
    
    printf("Qual valor do carro? ");
    scanf("%f", &valor);
    
    printf("Percentual de lucro do distribuidor? ");
    scanf("%f", &lucro);
    
    printf("Qual o percentual de imposto? ");
    scanf("%f", &imposto);
    
    system("clear");
    
    lucro_p = valor * (lucro/100);
    printf("O valor de lucro do distribuidor é: R$ %.2f\n", lucro_p);
    imposto_c = valor * (imposto/100);
    printf("O valor imposto desse carro é: R$ %.2f\n", imposto_c);
    final = valor + lucro_p + imposto_c;
    printf("O valor final do carro é: R$ %.2f\n", final);

return 0;    
}
    