#include <stdio.h>

/*  Sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1760 jardas

Faça um programa que que receba uma medida em pés, faça a conversões a
seguir e mostre os resultados.
a) Polegadas;
b) Jardas;
c) Milhas. */

int main() {
    int polegadas, pes, jardas, milhas;
    
    
    printf("Quantos pés de distância?");
    scanf("%d", &pes);
    
    polegadas = pes * 12;
    
    printf("A distancia em polegadas e: %d \n", polegadas);
    
    jardas = pes/3;
    
    printf("A distancia em jardas e: %d  \n", jardas);
    
    milhas = pes / 5280;
    
    printf("A distancia em milhas e: %d  \n", milhas);

}
    
