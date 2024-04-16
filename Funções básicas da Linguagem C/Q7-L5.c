/*7. Escreva um programa que solicita e lê um número, calcula e exibe o seu cubo.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n ;
	
	printf("digite o valor desejado para calcular seu cubo: \n");
	scanf ("%f", &n);
	
	printf("o cubo do valor desejado é:\n%.0f", n*n*n);
	
	return 0 ;
}