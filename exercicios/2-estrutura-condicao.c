/*Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir 
"Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do 
que os outros dois (o primeiro não pode ser igual a nenhum). Caso contrário, 
deve ser impressa a mensagem: "Erro".*/

#include <stdio.h>

int main() {
	float number1, number2, number3;
	
	printf("Digite um número: \n");
	scanf("%f", &number1);
	printf("Digite outro número: \n");
	scanf("%f", &number2);
	printf("Digite outro número: \n");
	scanf("%f", &number3);
	
	if((number1 != number2) && (number1 != number3)) {
		if((number1 > number2) && (number1 > number3)) {
			printf("Condição satisfeita.");
		}else {
			printf("O primeiro número deve ser maior que os demais.");
		}
		
	}else {
		printf("O primeiro número deve ser diferente dos demais.");
	}
	return 0;
}
