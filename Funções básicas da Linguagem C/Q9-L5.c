/*9. A cotação do dólar influencia na economia brasileira e muitos economistas se
encarregam de calcular, muitas vezes de forma manual, o valor do real em dólar.
Você foi contratado por um economista para automatizar a conversão de reais em
dólares. Crie um programa que solicita e lê a cotação do dólar atual e o valor em real
a ser convertido e, em seguida, calcula e exibe o resultado da conversão.*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
 float r;
 
 printf("para fazer a conversão primeiro digite quantos reais você quer converter:  ");
 scanf("%f", &r);
 
 printf("o resultado da conversão foi: $%.2f", r * 4.93);
 
 return (0);
	
}