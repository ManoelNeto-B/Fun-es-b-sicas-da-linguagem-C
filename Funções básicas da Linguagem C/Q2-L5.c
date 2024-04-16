/*2. Modifique o programa anterior para mostrar quatro frases diferentes, escolhidas por
você. Mantenha a forma de apresentação.*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("java scrip é linguagem de progamação\n\n");
	
	printf("Manoel,\n neto\n\n");
	
	printf("\tfort nite\n\n");
	
	printf("atividade,\n\t criativo\n\n");
	
	return (0);
}