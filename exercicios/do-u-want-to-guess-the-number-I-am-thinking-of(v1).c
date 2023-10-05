#include <stdio.h>
#define NUMBER_OF_ATTEMPTS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int secretNumber = 42;
	int guessing = 0;
	int i = 1;	
	
	for(i; i <= NUMBER_OF_ATTEMPTS; i++) {
		printf("Tentativa %d de %d.\n", i, NUMBER_OF_ATTEMPTS);	
		printf("Qual numero eu estou pensando?\n");
		scanf("%d", &guessing);	
		printf("Seu chute foi: %d.\n", guessing);
		
		if(guessing < 0) {
			printf("numeros menores que zero são inválidos para esse jogo!");
			i--;
			continue;
		}
		
		int hit = secretNumber == guessing;			
		
		if(!hit) {				
			if(guessing > secretNumber) {
				printf("Chutou alto!\n");
			}else {
				printf("Chutou baixo!\n");
			}
			printf("Tente de novo!\n");
		}else {
			printf("Parabens! voce adivinhou!\n");	
			break;	
		}	
	}
	printf("Quer jogar de novo?\n");		
	return 0;
}
