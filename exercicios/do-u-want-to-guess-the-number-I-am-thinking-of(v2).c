#include <stdio.h>

int main() {
	int secretNumber = 10;
	int guessing = 0;	
	int i = 0;
	int trying = 1;
	
	while(i < 3) {
		printf("Tentativa %d de 3 \n", trying);
		printf("Qual numero estou pensando?\n");
		scanf("%d", &guessing);
		printf("Seu chute foi: %d.\n", guessing);		
		
		int hit = guessing == secretNumber;
		
		if(guessing < 0) {
			printf("Numeros negativos nao sao permitidos.\n");
			continue;
		}
		
		if(hit) {			
			printf("Parabens! voce acertou!\n");
			break;
		}else if(guessing > secretNumber) {
			printf("Seu chute eh maior que o numero que pensei!\n");
		}else {
			printf("Seu chute eh menor que o numero que pensei!\n");
		}		
		i++;
		trying++;
	}	
}
