/* 12. Faça um programa para calcular o volume de uma caixa retangular. Para isto, utilize
a seguinte fórmula:
𝑣𝑜𝑙𝑢𝑚𝑒 = 𝑐𝑜𝑚𝑝𝑟𝑖𝑚𝑒𝑛𝑡𝑜 × 𝑙𝑎𝑟𝑔𝑢𝑟𝑎 × 𝑎𝑙𝑡𝑢𝑟𝑎
Os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuário.*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float c, l, a, v;
	
	printf("Para calcular o volume de uma caixa informe as seguintes informações\n");
	
	printf("informe o comprimento da caixa:\n");
	scanf("%f", &c);
	 
	printf("informe a largura ca caixa:\n");
	scanf("%f", &l);
	
	printf("informe a altura da caixa:\n");
	scanf("%f", &a);
	
	v = c * l * a;
	
	printf("O volume da sua caixa é: %.2f", v);
	
	return (0);
}