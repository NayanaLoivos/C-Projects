/*Fa�a um programa que receba dois n�meros 
e mostre o maior entre eles. Caso eles sejam iguais, 
deve-se mostrar a mensagem "Os n�meros s�o iguais".*/
#include <stdio.h>

int main() {
	float number1, number2;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%f", &number1);
	printf("Digite outro n�mero inteiro: ");
	scanf("%f", &number2);
	
	if(number1 != number2) {
		if(number1 > number2) {
			printf("O maior n�mero �: %.2f.\n", number1);
		}else {
			printf("O maior n�mero �: %.2f.\n", number2);
		}		
	}else {
		printf("Os n�meros s�o iguais!");
	}
	return 0;
}


