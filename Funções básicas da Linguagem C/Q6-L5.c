/* 6. Faça um programa que solicita e lê temperatura em Fahrenheit, faz a conversão para
Celsius e exibe tal resultado. Para isto, utilize a seguinte fórmula:
𝐶 =
(𝐹 − 32)
1,8*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float f ;
	
	printf("\n digite a temperatura em fahrenheit \n\n");
	scanf ("%f\n", &f);
	
	printf("\n a conversão de fahrenheit para célcios foi de:%.2f" , (f - 32) / 1.8);
	
}