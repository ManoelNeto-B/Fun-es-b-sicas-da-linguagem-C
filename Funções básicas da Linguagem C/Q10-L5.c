/*10. Você foi procurado por uma nutricionista para automatizar o cálculo do Índice de
Massa Corpórea (IMC) de seus pacientes. Para isto, crie um programa que solicita e
lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais
após a vírgula. O IMC é calculado por meio da seguinte fórmula:
𝐼𝑀𝐶 =
𝑝𝑒𝑠𝑜
𝑎𝑙𝑡𝑢𝑟𝑎2*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float p, a, r;
	
	printf("para calcular o MMC por favor informe \n");
	
	printf("por favor informe seu peso");
	scanf("%f", &p);
	
	printf("por favor informe sua altura");
	scanf("%f", &a);
	
	r = p / (a * a);
	
	printf("o resultado do seu MMc foi:  %.1f", r);
	
	return (0);
}
