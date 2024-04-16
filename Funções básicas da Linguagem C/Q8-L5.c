/*8. Implemente um programa que solicita ao usuário a sua idade e calcula quantos dias
de vida, aproximadamente, ele já viveu. Para simplificar o seu trabalho, ignore os
anos bissextos e use somente a idade, mas deixe o usuário ciente de que o resultado
apresentado é um valor aproximado.*/

#include<stdio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");

int i;

printf("digite sua idade para saber quantos dias você já vivel, lembrando que o resultado não sera preciso:  ");
scanf ("%i", &i);

printf("a quantidade de dias que você vivel é de aproximadamente: %.0i", i*365);

return 0 ;
}