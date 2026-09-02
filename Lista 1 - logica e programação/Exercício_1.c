#include <stdio.h>	
#include <stdlib.h>

/* Exercicio 1. Faça um programa que receba quatro números inteiros, calcule e mostre a soma
desses números.
Solução:
ALGORITMO
DECLARE n1, n2, n3, n4, soma NUMERICO
LEIA n1, n2, n3, n4
soma = n1 + n2 + n3 + n4
ESCREVA soma
FIM_ALGORITMO.*/

int main () {
	//declaracção de variáveis
	int n1, n2, n3, n4 , soma;
	
	
	printf ("digite o primeiro numero");
	scanf ("%d", &n1);
	printf ("digite o segundo numero");
	scanf ("%d", &n2);
	printf ("digite o terceiro numero");
	scanf ("%d", &n3);
	printf ("digite o quarto numero");
	scanf ("%d", &n4);
	
	soma = n1 + n2 + n3 + n4; //Soma de todos os numeros declarados
			
	printf ("valor da soma e %d\n,", soma);
	
}