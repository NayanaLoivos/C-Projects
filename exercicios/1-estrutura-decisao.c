/*Faça um programa que receba dois números 
e mostre o maior entre eles. Caso eles sejam iguais, 
deve-se mostrar a mensagem "Os números são iguais".*/
#include <stdio.h>

int main() {
	float number1, number2;
	
	printf("Digite um número inteiro: ");
	scanf("%f", &number1);
	printf("Digite outro número inteiro: ");
	scanf("%f", &number2);
	
	if(number1 != number2) {
		if(number1 > number2) {
			printf("O maior número é: %.2f.\n", number1);
		}else {
			printf("O maior número é: %.2f.\n", number2);
		}		
	}else {
		printf("Os números são iguais!");
	}
	return 0;
}


