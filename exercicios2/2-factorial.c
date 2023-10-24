/* Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo
que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.*/
/*!Exemplo: !5= (5*4) * (20*3) * (60*2) * (120*1) */

#include <stdio.h>

int factorial(int factorial_number) {
    if(factorial_number < 0) {
        return -1;
    }
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

    if(result == -1) {
        printf("O fatorial eh uma operacao matematica que eh definida apenas para numeros inteiros nao "
               "negativos que incluem 0, 1, 2, 3, e assim por diante.\n");
    }else {
        printf("O fatorial de %d eh igual a %d", factorial_number, result);
    }
    return 0;
}