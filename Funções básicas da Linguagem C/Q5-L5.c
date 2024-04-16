/* 5. Faça um programa que solicita e lê dois números, calcula e exibe o dobro do
primeiro e o triplo do segundo.*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b;
	
	printf ("digite o primereiro valor\n");
	scanf ("%i", &a);
	
    printf ("digite o segundo valor\n");
	scanf ("%i", &b);
	
	printf ("o dobro do primeiro valor é %i \n", a*2);
	
	printf ("o triplo do primeiro valor é %i \n", b*3);
	
	return 0 ;
}