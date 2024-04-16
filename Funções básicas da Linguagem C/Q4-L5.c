/*4. Crie um programa que solicita e lê uma temperatura em Celsius, faz a conversão
para Fahrenheit e exibe tal resultado. Para isto, utilize a seguinte fórmula: 𝐹 = (𝐶 × 1,8) + 32*/

#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
float c;

printf("digite a temperatura em celsius \n");
scanf ("%f",&c);

printf("a conversão em em fahrenheit é %.2f \n", c*1.8 + 32);

return 0 ;
}