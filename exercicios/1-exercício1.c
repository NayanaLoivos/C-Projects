/*Faça um programa que receba quatro números inteiros, 
calcule e mostre a soma desses números.*/

#include <stdio.h>

int main() {
	int number1, number2, number3, number4, sum;
	
	printf("Informe uma sequencia de 4 numeros inteiros:\n");
	scanf("%d %d %d %d.\n", &number1, &number2, &number3, &number4);
	
	sum = number1 + number2 + number3 + number4;
	
	printf("O resultado da soma dos numeros digitados eh: %d", sum);
}
