/*Desenvolva um algoritmo que receba um número N e calcule 
o fatorial de N, sabendo que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.*/

#include <stdio.h>

int main() {
	int factorial;
    printf("Digite o numero a ser fatorado:\n");    
    scanf("%d", &factorial);
    printf("O numero digitado eh: %d\n", factorial);
	int i = factorial -1;	
	
    for (i; i >= 1; i--) {
        factorial *= i;
    }

    printf("Seu fatorial eh: %d.\n", factorial);
    return 0;
}
