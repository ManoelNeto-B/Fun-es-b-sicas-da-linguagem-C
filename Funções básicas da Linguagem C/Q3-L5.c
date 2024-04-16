/* 3. Todos os números naturais possuem antecessor, que é o número que antecede
(anterior) um valor específico, e sucessor, que é o número que sucede (posterior) um
valor específico. Sabendo disso, implemente um programa que solicita ao usuário a
entrada de um número inteiro e apresenta seu antecessor e sucessor.*/ 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("digite o número desejado:\n");
	scanf("%i",&numero);
	
	printf("o sucessor do seu número é:%i\n", numero +1);
	
	printf("o antecessor do seu número é:%i\n", numero -1);
	
	return 0;
}