/*Desenvolva um algoritmo que some todos os 
números inteiros compreendidos entre 1 e 10 (inclusive).*/
#include <stdio.h>

int main() {
	int i=0, sum=0;
	
	for(i; i<=10; i++){
		sum += i;
	}
	printf("%d ", sum);
}

