/*Desenvolva um algoritmo que receba dois n�meros inteiros positivos A e B. 
Exiba na tela todos os n�meros inteiros compreendidos entre A e B, 
excluindo os pr�prios A e B. Suponha que o usu�rio respeite o enunciado e 
insira valores v�lidos para A e B.*/

#include <stdio.h>

int main(){
	int number1 = 0;
	int number2 = 0;
	
	printf("Digite um numero inteiro qualquer: ");
	scanf("%d", &number1);
	printf("Digite um numero inteiro qualquer: ");
	scanf("%d", &number2);
	
	if(number1 == number2) {
		printf("Voc� digitou dois numeros iguais!");		
	}else if(number1 < number2) {
			for(number1; number1 <= number2; number1++) {
			printf(" %d", number1);
		}		
	}else {
		for(number2; number2 <= number1; number2++) {
			printf(" %d", number2);
		}
	}
	return 0;
}	

