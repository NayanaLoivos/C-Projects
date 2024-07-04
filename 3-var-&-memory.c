#include <stdio.h>

int main(){
    int number1 = 10;
    int number2;

    printf("Posicao(&) na memoria de number1: %p\n", &number1);
    printf("Valor na memoria de number1: %d\n", number1);
    printf("Posicao(&) na memoria de number2: %p\n", &number2);
    printf("Valor na memoria de number2: %d", number2);

    return 0;
}
