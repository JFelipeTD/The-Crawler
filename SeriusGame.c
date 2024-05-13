#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define BOARD_SIZE 10
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


  void printBoard(char board[][BOARD_SIZE], int playerX, int playerY) {
   int i;
   int j;
   
    for ( i = 0; i < BOARD_SIZE; i++) {
        for ( j = 0; j < BOARD_SIZE; j++) {
            if (i == playerY && j == playerX) {
                printf("&");
            } else {
                printf("%c ", board[i][j]);
            }
        }
        printf("\n");
    }
}

void printBoard2(char board[][BOARD_SIZE_2]) {
    for (int i = 0; i < BOARD_SIZE_2; i++) {
        for (int j = 0; j < BOARD_SIZE_2; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}



#define BOARD_SIZE 10

void movePlayer(char board[][BOARD_SIZE], int *playerX, int *playerY, char move) {
    int newX = *playerX;
    int newY = *playerY;

    switch (move) {
        case 'W':
        case 'w':
            newY = *playerY - 1;
            break;
        case 'A':
        case 'a':
            newX = *playerX - 1;
            break;
        case 'S':
        case 's':
            newY = *playerY + 1;
            break;
        case 'D':
        case 'd':
            newX = *playerX + 1;
            break;
        default:
            
            return;
    }

      if (newX >= 0 && newX < BOARD_SIZE && newY >= 0 && newY < BOARD_SIZE) {
        // Verificar se a nova posição não é um obstáculo
        if (board[newY][newX] != '*') {
            *playerX = newX;
            *playerY = newY;
        }
    }

}


int main(int argc, char *argv[]) {
	//Declaracao de variaveis
	char escolha;
	int  UmfaseI[5];

	int espaco_j;
	int chave = 1;
	
	int playerX = 1; 
    int playerY = 1;
	char move;
	char board[BOARD_SIZE][BOARD_SIZE] = {
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
	char board2[BOARD_SIZE_2][BOARD_SIZE_2] = {
    {'*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','D',' ',' ',' ','@','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','*',' ','*',' ',' ','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ','X',' ','*',' ','*',' ',' ','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*','@',' ',' ','*',' ','*',' ','&','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*','*','*','*','*',' ','*','*','*','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','D',' ','D',' ',' ','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','*',' ','*',' ','X','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','*',' ','*',' ','@','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*','*','*','*','*','D','*','*','*','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','D',' ',' ',' ','@','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','*',' ','*',' ',' ','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ','X',' ','*',' ','*',' ',' ','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*','@',' ',' ','*',' ','*',' ','&','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*','*','*','*','*',' ','*','*','*','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','D',' ','D',' ',' ','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','*',' ','*',' ','X','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*',' ',' ',' ','*',' ','*',' ','@','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
	{'*','*','*','*','*','D','*','*','*','*','*',' ',' ',' ','*',' ','*',' ',' ','*'}
      	
      																					
      												
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
				system("cls");
				   
                  while (1) {
				  system("cls");
       
	    printBoard(board, playerX, playerY);
         movePlayer(board, &playerX, &playerY, move);
         scanf(" %c", &move);}
        
                    
			 
			 
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
