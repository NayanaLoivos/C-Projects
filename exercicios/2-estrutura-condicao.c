/*Desenvolva um algoritmo que receba tr�s n�meros. O algoritmo deve imprimir 
"Condi��o satisfeita", na tela, caso o primeiro dado inserido seja maior do 
que os outros dois (o primeiro n�o pode ser igual a nenhum). Caso contr�rio, 
deve ser impressa a mensagem: "Erro".*/

#include <stdio.h>

int main() {
	float number1, number2, number3;
	
	printf("Digite um n�mero: \n");
	scanf("%f", &number1);
	printf("Digite outro n�mero: \n");
	scanf("%f", &number2);
	printf("Digite outro n�mero: \n");
	scanf("%f", &number3);
	
	if((number1 != number2) && (number1 != number3)) {
		if((number1 > number2) && (number1 > number3)) {
			printf("Condi��o satisfeita.");
		}else {
			printf("O primeiro n�mero deve ser maior que os demais.");
		}
		
	}else {
		printf("O primeiro n�mero deve ser diferente dos demais.");
	}
	return 0;
}
