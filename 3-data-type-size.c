#include <stdio.h>

int main () {
    // Tipos de dados mencionados no artigo
    printf("int, Bytes: %zu\n", sizeof(int));
    printf("float, Bytes: %zu\n", sizeof(float));
    printf("double, Bytes: %zu\n", sizeof(double));
    printf("char, Bytes: %zu\n", sizeof(char));

    // Tipos de dados não mencionados no artigo
    printf("unsigned int, Bytes: %zu\n", sizeof(unsigned int));
    printf("short int, Bytes: %zu\n", sizeof(short int));
    printf("unsigned short int, Bytes: %zu\n", sizeof(unsigned short int));
    printf("long int, Bytes: %zu\n", sizeof(long int));
    printf("unsigned long int, Bytes: %zu\n", sizeof(unsigned long int));
    printf("long long int, Bytes: %zu\n", sizeof(long long int));
    printf("unsigned long long int: %zu\n", sizeof(unsigned long long int));

    printf("----------------------------------------\n");
    printf("signed char: %zu\n", sizeof(signed char));
    printf("unsigned char: %zu\n", sizeof(unsigned char));

    printf("----------------------------------------\n");
    printf("long double: %zu\n", sizeof(long double));

    return 0;

    /* Nota: Os tipos long, short, signed e unsigned são
    modificadores de tipo de dado que podem ser usados
    com alguns tipos de dados primitivos para alterar o tamanho
    ou comprimento do tipo de dado. */
}