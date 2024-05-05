#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char escolha;
	int  UmfaseI[5];
	
	while(escolha != 'c'){
		system("cls");
		printf("Menu:\n");
		printf("a) iniciar game\n");
		printf("b) Tutorial/Hisoria\n");
		printf("c) Sair\n");
		printf("Sua escolha: ");
		scanf(" %c", &escolha);
		if(escolha != 'a' && escolha != 'b' && escolha != 'c' && escolha != 'v'){
			printf("Escolha invalida, tente novamente\n");
			system("pause");
		}
			switch(escolha){
				case('a'):
				case('b'):
					escolha = 'h';
					system("cls");
					while(escolha == 'h' || escolha == 't'){
						printf("(t) Tutorial\n(h) Historia\n(v) Voltar\nSua escolha: ");
					scanf(" %c", &escolha);
					switch(escolha){
						case('t'):
							system("cls");
							printf("Totorial:\n(&) - Seu personagem\n($) - Inimigos\n(@) - chave da porta\n");
							system("pause");
							system("cls");
							break;
						case('h'):
							system("cls");
							printf("Voce e uma pessoa normal que realiza suas tarefas diarias arduamente todos os dias. Depois de uma semana longa, em uma de suas\nnoites de jogatina no final de semana, voce sente sua o cansaco acaba alcancando o seu corpo e a sua mente, entao voce decide\ndescancar um pouco. No momento em que suas papebras se fecham voce ainda passa alguns minutos conciente, mas logo depois comeca\na ouvir gotas de agua caindo no chão e ecoando no que parecia ser uma caverna, quando seus olhos se abrem, ainda com o cansaco\nda longa noite, voce percebe que esta em um calabouco com uma porta de aco pesado a sua frente. Mesmo confuso e assustado\ncom toda aquela situacao, voce decide encontrar uma maneira de sair daquele lugar e entender melhor oque esta acontecendo\n");
							system("pause");
							system("cls");
							break;
					}
					}
			}
	}
	return 0;
}
