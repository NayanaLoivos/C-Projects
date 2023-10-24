/* Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo
que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.*/
/*!Exemplo: !5= (5*4) * (20*3) * (60*2) * (120*1) */

#include <stdio.h>

int factorial(int factorial_number) {
    int result = 1;
    for(int i = 1; i <= factorial_number; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int factorial_number = 0, result = 0;
    printf("Insira o numero a ser fatorado: ");
    scanf("%d", &factorial_number);

    result = factorial(factorial_number);
    printf("O fatorial de %d eh igual a %d", factorial_number, result);
    return 0;
}