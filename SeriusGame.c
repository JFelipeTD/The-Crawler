#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declaracao de variaveis
	char escolha;
	int  UmfaseI[5];
	int i;
	int j;
	int espaco_j;
	int chave = 1;
	int chave2 = 1;
	int chave3 = 1;
	int porta = 1;
	int porta2 = 1;
	int porta3 = 1;
	int vida = 3;
	int movimento_Bot1;
	int movimento_Bot2;
	int posicaoX = 8;
	int posicaoY = 4;
	int monstroN1_1X = 2;
	int monstroN1_1Y = 3;
	int monstroN1_2X = 8;
	int monstroN1_2Y = 7;
	char movimento;
	char mapa1[10][10] = {
	{'*','*','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ','D',' ',' ',' ','@','*'},
	{'*',' ',' ',' ','*',' ','*',' ',' ','*'},
	{'*',' ','X',' ','*',' ','*',' ',' ','*'},
	{'*','@',' ',' ','*',' ','*',' ','&','*'},
	{'*','*','*','*','*',' ','*','*','*','*'},
	{'*',' ',' ',' ','D',' ','D',' ',' ','*'},
	{'*',' ',' ',' ','*',' ','*',' ','X','*'},
	{'*',' ',' ',' ','*',' ','*',' ','@','*'},
	{'*','*','*','*','*','D','*','*','*','*'}
	};
	//Laco para a criacao do menu
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
	//opcoes do menu
			switch(escolha){
				case('a'):
					while(vida > 0 && vida < 4){
					system("cls");
					//Criacao do mapa
					for(i = 0; i < 10; i++){
						for(espaco_j = 0; espaco_j < 70; espaco_j++){
						printf(" ");
						}
						for (j=0; j<10; j++){
						printf("%c", mapa1[i][j]);
					  	printf(" ");
						}
						printf("\n");
					}
					//Final do Jogo
					if(mapa1[posicaoY][posicaoX] == mapa1[9][5]){
						vida = 4;
						system("cls");
						printf("Muito Obrigado por Jogar o Nosso Jogo!!!\n");
						system("pause");
						escolha = 'c';
						break;
					}
					//Ler o movimento do jogador
					while(1){
						if(_kbhit()){
							movimento = _getch();
							break;
						}
					}
					//Interacao da chave e porta
					if(movimento == 'i'){
						if(mapa1[posicaoY][posicaoX] == mapa1[1][8]){
							chave = 0;
							porta = 0;
						}
						if(mapa1[posicaoY][posicaoX] == mapa1[8][8]){
							chave2 = 0;
							porta2 = 0;
						}
						if(mapa1[posicaoY][posicaoX] == mapa1[4][1]){
							chave3 = 0;
							porta3 = 0;
						}
					}
					//Porta aberta
					if(porta == 0){
						mapa1[6][6] = '=';
					}
					if(porta2 == 0){
						mapa1[1][4] = '=';
					}
					if(porta3 == 0){
						mapa1[9][5] = '=';
					}
					//Debug da chave
					if(chave == 1 && (posicaoY != 1 || posicaoX != 8)){
						mapa1[1][8] = '@';
					}
					if(chave2 == 1 && (posicaoY != 8 || posicaoX != 8)){
						mapa1[8][8] = '@';
					}
					if(chave3 == 1 && (posicaoY != 4 || posicaoX != 1)){
						mapa1[4][1] = '@';
					}
					//Laco para os movimentos e as interacoes do personagem
					if(movimento == 'w'){
						if(mapa1[posicaoY - 1][posicaoX] == ' ' || mapa1[posicaoY - 1][posicaoX] == '@' || mapa1[posicaoY - 1][posicaoX] == '='){
							mapa1[posicaoY][posicaoX] = ' ';
							if((mapa1[posicaoY][posicaoX] == mapa1[1][8] && chave == 1) || (mapa1[posicaoY][posicaoX] == mapa1[8][8] && chave2 == 1) || (mapa1[posicaoY][posicaoX] == mapa1[4][1] && chave3 == 1)){
								mapa1[posicaoY][posicaoX] = '@';
							}
							posicaoY--;
							mapa1[posicaoY][posicaoX] = '&';
						} else if(mapa1[posicaoY - 1][posicaoX] == 'X'){
							mapa1[posicaoY][posicaoX] = ' ';
							posicaoX = 8;
							posicaoY = 4;
							mapa1[4][8] = '&';
							vida = vida - 1;
						}
					} else if(movimento == 's'){
						if(mapa1[posicaoY + 1][posicaoX] == ' ' || mapa1[posicaoY + 1][posicaoX] == '@' || mapa1[posicaoY + 1][posicaoX] == '='){
							mapa1[posicaoY][posicaoX] = ' ';
							if((mapa1[posicaoY][posicaoX] == mapa1[1][8] && chave == 1) || (mapa1[posicaoY][posicaoX] == mapa1[8][8] && chave2 == 1) || (mapa1[posicaoY][posicaoX] == mapa1[4][1] && chave3 == 1)){
								mapa1[posicaoY][posicaoX] = '@';
							}
							posicaoY++;
							mapa1[posicaoY][posicaoX] = '&';
						} else if(mapa1[posicaoY + 1][posicaoX] == 'X'){
							mapa1[posicaoY][posicaoX] = ' ';
							posicaoX = 8;
							posicaoY = 4;
							mapa1[4][8] = '&';
							vida = vida - 1;
						}
					} else if(movimento == 'a'){
						if(mapa1[posicaoY][posicaoX - 1] == ' ' || mapa1[posicaoY][posicaoX - 1] == '@' || mapa1[posicaoY][posicaoX - 1] == '='){
							mapa1[posicaoY][posicaoX] = ' ';
							if((mapa1[posicaoY][posicaoX] == mapa1[1][8] && chave == 1) || (mapa1[posicaoY][posicaoX] == mapa1[8][8] && chave2 == 1) || (mapa1[posicaoY][posicaoX] == mapa1[4][1] && chave3 == 1)){
								mapa1[posicaoY][posicaoX] = '@';
							}
							if((mapa1[posicaoY][posicaoX] == mapa1[6][6] && porta == 0) || (mapa1[posicaoY][posicaoX] == mapa1[1][4] && porta2 == 0)){
								mapa1[posicaoY][posicaoX] = '=';
							}
							posicaoX--;
							mapa1[posicaoY][posicaoX] = '&';
						} else if(mapa1[posicaoY][posicaoX - 1] == 'X'){
							mapa1[posicaoY][posicaoX] = ' ';
							posicaoX = 8;
							posicaoY = 4;
							mapa1[4][8] = '&';
							vida = vida - 1;
						}
					} else if(movimento == 'd'){
						if(mapa1[posicaoY][posicaoX + 1] == ' ' || mapa1[posicaoY][posicaoX + 1] == '@' || mapa1[posicaoY][posicaoX + 1] == '='){
							mapa1[posicaoY][posicaoX] = ' ';
							if((mapa1[posicaoY][posicaoX] == mapa1[1][8] && chave == 1) || (mapa1[posicaoY][posicaoX] == mapa1[8][8] && chave2 == 1) || (mapa1[posicaoY][posicaoX] == mapa1[4][1] && chave3 == 1)){
								mapa1[posicaoY][posicaoX] = '@';
							}
							if((mapa1[posicaoY][posicaoX] == mapa1[6][6] && porta == 0) || (mapa1[posicaoY][posicaoX] == mapa1[1][4] && porta2 == 0)){
								mapa1[posicaoY][posicaoX] = '=';
							}
							posicaoX++;
							mapa1[posicaoY][posicaoX] = '&';
						} else if(mapa1[posicaoY][posicaoX + 1] == 'X'){
							mapa1[posicaoY][posicaoX] = ' ';
							posicaoX = 8;
							posicaoY = 4;
							mapa1[4][8] = '&';
							vida = vida - 1;
						}
					}
					//Movimento do monstro nivel 1
					srand(time(NULL));
					movimento_Bot1 = 1 + rand()%4;
					if(movimento_Bot1 == 1){
						if(mapa1[monstroN1_1Y - 1][monstroN1_1X] == ' ' || mapa1[monstroN1_1Y - 1][monstroN1_1X] == '&'){
							mapa1[monstroN1_1Y][monstroN1_1X] = ' ';
							monstroN1_1Y--;
							mapa1[monstroN1_1Y][monstroN1_1X] = 'X';
							if(mapa1[monstroN1_1Y][monstroN1_1X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					} else if(movimento_Bot1 == 2){
						if(mapa1[monstroN1_1Y + 1][monstroN1_1X] == ' ' || mapa1[monstroN1_1Y + 1][monstroN1_1X] == '&'){
							mapa1[monstroN1_1Y][monstroN1_1X] = ' ';
							monstroN1_1Y++;
							mapa1[monstroN1_1Y][monstroN1_1X] = 'X';
							if(mapa1[monstroN1_1Y][monstroN1_1X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					} else if(movimento_Bot1 == 3){
						if(mapa1[monstroN1_1Y][monstroN1_1X - 1] == ' ' || mapa1[monstroN1_1Y][monstroN1_1X - 1] == '&'){
							mapa1[monstroN1_1Y][monstroN1_1X] = ' ';
							monstroN1_1X--;
							mapa1[monstroN1_1Y][monstroN1_1X] = 'X';
							if(mapa1[monstroN1_1Y][monstroN1_1X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					} else if(movimento_Bot1 == 4){
						if(mapa1[monstroN1_1Y][monstroN1_1X + 1] == ' ' || mapa1[monstroN1_1Y][monstroN1_1X + 1] == '&'){
							mapa1[monstroN1_1Y][monstroN1_1X] = ' ';
							monstroN1_1X++;
							mapa1[monstroN1_1Y][monstroN1_1X] = 'X';
							if(mapa1[monstroN1_1Y][monstroN1_1X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					}
					
					movimento_Bot2 = 1 + rand()%4;
					if(movimento_Bot2 == 1){
						if(mapa1[monstroN1_2Y - 1][monstroN1_2X] == ' ' || mapa1[monstroN1_2Y - 1][monstroN1_2X] == '&'){
							mapa1[monstroN1_2Y][monstroN1_2X] = ' ';
							monstroN1_2Y--;
							mapa1[monstroN1_2Y][monstroN1_2X] = 'X';
							if(mapa1[monstroN1_2Y][monstroN1_2X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					} else if(movimento_Bot2 == 2){
						if(mapa1[monstroN1_2Y + 1][monstroN1_2X] == ' ' || mapa1[monstroN1_2Y + 1][monstroN1_2X] == '&'){
							mapa1[monstroN1_2Y][monstroN1_2X] = ' ';
							monstroN1_2Y++;
							mapa1[monstroN1_2Y][monstroN1_2X] = 'X';
							if(mapa1[monstroN1_2Y][monstroN1_2X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					} else if(movimento_Bot2 == 3){
						if(mapa1[monstroN1_2Y][monstroN1_2X - 1] == ' ' || mapa1[monstroN1_2Y][monstroN1_2X - 1] == '&'){
							mapa1[monstroN1_2Y][monstroN1_2X] = ' ';
							monstroN1_2X--;
							mapa1[monstroN1_2Y][monstroN1_2X] = 'X';
							if(mapa1[monstroN1_2Y][monstroN1_2X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					} else{
						if(mapa1[monstroN1_2Y][monstroN1_2X + 1] == ' ' || mapa1[monstroN1_2Y][monstroN1_2X + 1] == '&'){
							mapa1[monstroN1_2Y][monstroN1_2X] = ' ';
							monstroN1_2X++;
							mapa1[monstroN1_2Y][monstroN1_2X] = 'X';
							if(mapa1[monstroN1_2Y][monstroN1_2X] == mapa1[posicaoY][posicaoX]){
								vida--;
								posicaoY = 4;
								posicaoX = 8;
								mapa1[4][8] = '&';
							}
						}
					}
					
					}
					//Tela de morte
					system("cls");
					if(vida == 0){
						printf("VOCE PERDEU\nDeseja tentar novamente?\n(a) Sim\n(v) Nao\nSua escolha: ");
						scanf("%c ", &escolha);
					    system("cls");
						mapa1[monstroN1_1Y][monstroN1_1X] = ' ';
						monstroN1_1Y = 3;
						monstroN1_1X = 2;
						mapa1[3][2] = 'X';
						vida = 3;
						porta = 1;
						porta2 = 1;
						porta3 = 1;
						chave = 1;
						chave2 = 1;
						chave3 = 1;
					}
					break;
			
				case('b'):
					//Menu do tutorial/historia
					escolha = 'h';
					system("cls");
					while(escolha == 'h' || escolha == 't'){
						printf("(t) Tutorial\n(h) Historia\n(v) Voltar\nSua escolha: ");
					scanf(" %c", &escolha);
					switch(escolha){
						case('t'):
							system("cls");
							printf("Totorial:\n(&) - Seu personagem\n(X) - monstro nivel 1\n(V) - monstro nivel 2\n(@) - chave da porta\n(D) - porta fechada\n(=) - porta aberta\n(#) - espinhos\n(>) - portal\n");
							system("pause");
							system("cls");
							break;
						case('h'):
							system("cls");
							printf("Voce e uma pessoa normal que realiza suas tarefas diarias arduamente todos os dias. Depois de uma semana longa, em uma de suas\nnoites de jogatina no final de semana, voce sente que o cansaco acaba alcancando o seu corpo e a sua mente, entao voce decide\ndescancar um pouco. No momento em que suas papebras se fecham voce ainda passa alguns minutos conciente, mas logo depois comeca\na ouvir gotas de agua caindo no chao e ecoando no que parecia ser uma caverna, quando seus olhos se abrem, ainda com o cansaco\nda longa noite, voce percebe que esta em um calabouco com uma porta de aco pesado a sua frente. Mesmo confuso e assustado\ncom toda aquela situacao, voce decide encontrar uma maneira de sair daquele lugar e entender melhor oque esta acontecendo\n");
							system("pause");
							system("cls");
							break;
					}
					}
			}
	}
	return 0;
}
