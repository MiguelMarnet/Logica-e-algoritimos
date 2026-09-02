#include <stdio.h>
#include <stdlib.h>

/* Execício 18. Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para
os quais fornece a quantidade de ração em gramas. A quantidade diária de ração
fornecida para cada gato é sempre a mesma. Faça um programa que receba o peso
do saco de ração e a quantidade de ração fornecida para cada gato, calcule e mostre
quanto restará de ração no saco após cinco dias*/

int main() {
    float kg, g, consumo, final;

    printf("Quantos kg de ração você comprou?: ");
    scanf("%f", &kg);

    printf("Quantas gramas de ração cada gato consome por dia?:  ");
    scanf("%f", &g);
    
    consumo = (g * 2 * 5);
    final = (kg * 1000) - consumo;
    
    printf("Após 5 dias de consumo, você terá: %.2f", final);
    
return 0;    
}
    