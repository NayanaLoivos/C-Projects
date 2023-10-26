/*Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em média 2,1 centímetros
ao ano. Seu irmão, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em média 1,1
centímetro por ano. Elabore um programa que conte quantos anos serão necessários
para que a altura de Charlinho ultrapasse a de Bossa.*/

#include <stdio.h>
int compare_height(double greater_height, double smaller_height) {
    int years = 0;
    while(smaller_height <= greater_height){
        greater_height += 1.1;
        smaller_height += 2.1;
        years++;
    }
    return years+1;
}

int main() {
    double greater_height=0.0, smaller_height=0.0;
    int result=0;

    /*Serve somente no modo debug. Faz com que os printf apareçam no console*/
    setbuf(stdout, 0);
    printf("Digite a altura da pessoa mais alta sem pontos (exemplo: 145): ");
    scanf("%lf", &greater_height);
    setbuf(stdout, 0);
    printf("Digite a altura da pessoa mais baixa sem pontos (exemplo: 140): ");
    scanf("%lf", &smaller_height);
    setbuf(stdout, 0);
    result = compare_height(greater_height, smaller_height);
    printf("Serao necessarios %d anos para que a altura da pessoa mais baixa ultrapasse a da pessoa mais alta.\n", result);
    return 0;
}