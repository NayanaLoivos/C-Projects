/*Desenvolva um algoritmo que some todos os 
números inteiros compreendidos entre 1 e 10 (inclusive).*/

#include <stdio.h>

int main() {
	int i, sum=0;
	
	for(i=0; i<=10; i++){
		sum += i;
	}
	printf("%d ", sum);
}
