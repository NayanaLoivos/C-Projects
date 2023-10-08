/*Faça um programa que receba três notas e 
seus respectivos pesos, calcule e mostre a média ponderada dessas notas.*/

#include <stdio.h>

int main() {
	float nota1, nota2, nota3, mPonderada;
	int peso1, peso2, peso3;
	
	printf("Insira a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Insira o peso da primeira nota:\n");
	scanf("%d", &peso1);
	printf("Insira a segunda nota:\n");
	scanf("%f", &nota2);
	printf("Insira o peso da segunda nota:\n");
	scanf("%d", &peso2);
	printf("Insira a terceira nota:\n");	
	scanf("%f", &nota3);
	printf("Insira o peso da terceira nota:\n");
	scanf("%d",&peso3);
	
	mPonderada = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);
		
	printf("A media ponderada eh: %.2f", mPonderada);
	return 0;
}
