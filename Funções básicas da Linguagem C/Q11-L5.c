/*11. Elabore um programa que calcula a área de uma circunferência. Para isto, utilize a
seguinte fórmula:
𝐴 = 𝜋𝑟
2*/


#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float r;
	
	printf("por favor informe o valor do raio para calcular a área da circunferencia:  ");
	scanf("%f", &r);
	
	printf("a área da circunferencia desse raio foi: %.2f ", 3.14 * (r * r));
	
	return (0);
}