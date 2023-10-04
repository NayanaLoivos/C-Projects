#include <stdio.h>

int main(){
	int secretNumber = 42;
	int guessing = 0;
		
	printf("Qual numero eu estou pensando?\n");
	scanf("%d[^\n]", &guessing);	
	printf("Seu chute foi: %d.\n", guessing);
	
	int hit = secretNumber == guessing;
	int i = 0;
	int trying = 3;
	
	for(i; i>trying; i++) {
		printf("tentativa: %d", i);	
		
		if(!hit) {		
			if(guessing > secretNumber) {
				printf("Chutou alto!\n");
			}else {
				printf("Chutou baixo!\n");
			}
		}else {
			printf("Parabens! voce adivinhou!\n");		
		}
	}	
	return 0;	
}
