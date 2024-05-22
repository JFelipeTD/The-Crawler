#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Mapa da Fase 1
char Fase1[10][10] =
{
	{'*','*','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ','D',' ',' ',' ','@','*'},
	{'*',' ',' ',' ','*',' ','*',' ',' ','*'},
	{'*',' ',' ',' ','*',' ','*',' ',' ','*'},
	{'*','@',' ',' ','*',' ','*',' ',' ','*'},
	{'*','*','*','*','*',' ','*','*','*','*'},
	{'*',' ',' ',' ','D',' ','D',' ',' ','*'},
	{'*',' ',' ',' ','*',' ','*',' ',' ','*'},
	{'*',' ',' ',' ','*',' ','*',' ','@','*'},
	{'*','*','*','*','*','D','*','*','*','*'},
};
char Fase2[20][20] =
{
	{'*','*','*','*','*','*','*','*','*','=','*','*','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ','@',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ','#','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','#',' ','#',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','#',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','*','*','D','*','*','*','*','*','*','*',' ','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ','O',' ','*','#','#','#','#','#','#','#','#','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','@',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
};
char Fase3[40][40] =
{
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','>','*'},
	{'=',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','#',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ','#','#',' ',' ',' ',' ','#',' ',' ','#',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','>',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','*','*','*','*','*','D','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ','#','#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','*','D','*','*','*','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','#',' ',' ',' ',' ',' ',' ',' ','#',' ',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ','<',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ','<',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*'},
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','O',' ','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
	{'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
};
char escolha;
char FaseUm[10][10];
char FaseDois[20][20];
char FaseTres[40][40];
//Contadores
int i;
int j;
int z = 0;
int g = 0;
int vida = 3;
int VidaBoss = 4;
int Pular = 1;
//Localizacao de Monstro, Player, Chave e Porta
int StartY = 4;//Spawn Point
int StartX = 8;//Spawn Point
int PlayerY = 4;
int PlayerX = 8;
int ChaveY = 1;
int ChaveX = 8;
int ChaveY2 = 8;
int ChaveX2 = 8;
int ChaveY3 = 4;
int ChaveX3 = 1;
int PortaY = 6;
int PortaX = 6;
int PortaY2 = 1;
int PortaX2 = 4;
int PortaY3 = 9;
int PortaX3 = 5;
int BotaoY = 16;
int BotaoX = 8;
int MonstroN1_1Y = 6;
int MonstroN1_1X = 8;
int MonstroN1_2Y = 3;
int MonstroN1_2X = 2;
int MonstroN2_1Y = 50;
int MonstroN2_1X = 50;
int BossY = 50;
int BossX = 50;
int PortalY = 50;
int PortalX = 50;
int PortalY2 = 50;
int PortalX2 = 50;
int PortalY3 = 50;
int PortalX3 = 50;
int PortalY4 = 50;
int PortalX4 = 50;
//Definidor de void generico
int Linha = 10;
int Coluna = 10;

//Void para a barra de vida do boss
void BarraVidaBoss(){
	if(VidaBoss == 4){
		printf("\n\t\t\t\t              A   E N T I D A D E            ");
		printf("\n ________________________________________________________________________________________________________________________ ");
		printf("\n/                                                                                                                        \\");
		printf("\n\\________________________________________________________________________________________________________________________/");
	} else if(VidaBoss == 3){
		printf("\n\t\t\t\t              A   E N T I D A D E            ");
		printf("\n __________________________________________________________________________________________ ");
		printf("\n/                                                                                           ");
		printf("\n\\__________________________________________________________________________________________");
	} else if(VidaBoss == 2){
		printf("\n\t\t\t\t              A   E N T I D A D E            ");
		printf("\n ____________________________________________________________ ");
		printf("\n/                                                             ");
		printf("\n\\____________________________________________________________");
	} else if(VidaBoss == 1){
		printf("\n\t\t\t\t              A   E N T I D A D E            ");
		printf("\n ______________________________ ");
		printf("\n/                               ");
		printf("\n\\______________________________");
	}
}
//Void para gerar o mapa
void GerarMapa(char Fase[Linha][Coluna]){
	system("cls");
	for(i = 0; i < Linha; i++){//Contador para as linhas da matriz
		for(j = 0; j < Coluna; j++){//contador para as colunas da matriz
			if(i == PlayerY && j == PlayerX){//Localizador do Player
				printf(" &", Fase[i][j]);
				printf(" ");
			} else if((i == MonstroN1_1Y && j == MonstroN1_1X) || (i == MonstroN1_2Y && j == MonstroN1_2X)){//Localizador dos monstros nivel 1
				printf(" X", Fase[i][j]);
				printf(" ");
			} else if(i == MonstroN2_1Y && j == MonstroN2_1X){//Localizar dos monstros nivel 2
				printf(" V", Fase[i][j]);
				printf(" ");
			} else if(i == BossY && j == BossX){
				printf(" E", Fase[i][j]);
				printf(" ");
			} else{//Gerar o resto da matriz
				printf(" %c", Fase[i][j]);
				printf(" ");
			}
		}
		printf("\n");//Espaco para organizar as linhas
	}
}
//Void para o movimento do Player
void MovimentoPlayer(char Fase[Linha][Coluna]){
	char movimento;//Variavel para armazenar o movimento
	movimento = getch();//Registrador do movimento
	
	switch(movimento){//Leitor do comando do usuario
		case'w':{
			if(Fase[PlayerY - 1][PlayerX] == ' ' || Fase[PlayerY - 1][PlayerX] == '@' || Fase[PlayerY - 1][PlayerX] == '=' || Fase[PlayerY - 1][PlayerX] == 'O' || Fase[PlayerY - 1][PlayerX] == '#' || Fase[PlayerY - 1][PlayerX] == '<' || Fase[PlayerY - 1][PlayerX] == '>' || Fase[PlayerY - 1][PlayerX] == '!'){//Indentificardor de espacos moveis
				PlayerY--;//Mover para baixo
			}
			break;
		}
		case's':{
			if(Fase[PlayerY + 1][PlayerX] == ' ' || Fase[PlayerY + 1][PlayerX] == '@' || Fase[PlayerY + 1][PlayerX] == '=' || Fase[PlayerY + 1][PlayerX] == 'O' || Fase[PlayerY + 1][PlayerX] == '#' || Fase[PlayerY + 1][PlayerX] == '<' || Fase[PlayerY + 1][PlayerX] == '>' || Fase[PlayerY + 1][PlayerX] == '!'){//Indentificardor de espacos moveis
				PlayerY++;//Mover para cima
			}
			break;
		}
		case'a':{
			if(Fase[PlayerY][PlayerX - 1] == ' ' || Fase[PlayerY][PlayerX - 1] == '@' || Fase[PlayerY][PlayerX - 1] == '=' || Fase[PlayerY][PlayerX - 1] == 'O' || Fase[PlayerY][PlayerX - 1] == '#' || Fase[PlayerY][PlayerX - 1] == '<' || Fase[PlayerY][PlayerX - 1] == '>' || Fase[PlayerY][PlayerX - 1] == '!'){//Indentificardor de espacos moveis
				PlayerX--;//Mover para o lado esquerdo
			}
			break;
		}
		case'd':{
			if(Fase[PlayerY][PlayerX + 1] == ' ' || Fase[PlayerY][PlayerX + 1] == '@' || Fase[PlayerY][PlayerX + 1] == '=' || Fase[PlayerY][PlayerX + 1] == 'O' || Fase[PlayerY][PlayerX + 1] == '#' || Fase[PlayerY][PlayerX + 1] == '<' || Fase[PlayerY][PlayerX + 1] == '>' || Fase[PlayerY][PlayerX + 1] == '!'){//Indentificardor de espacos moveis
				PlayerX++;//Mover para o lado direito
			}
			break;
		}
		case'i':{//Comando de interacao com a chave/botao
			if(Fase[PlayerY][PlayerX] == Fase[ChaveY][ChaveX]){//identificador da chave
				Fase[ChaveY][ChaveX] = ' ';//Retirar chave
				Fase[PortaY][PortaX] = '=';//Porta aberta
			}
			if(Fase[PlayerY][PlayerX] == Fase[ChaveY2][ChaveX2]){//identificador da chave
				Fase[ChaveY2][ChaveX2] = ' ';//Retirar chave
				Fase[PortaY2][PortaX2] = '=';//Porta aberta
			}
			if(Fase[PlayerY][PlayerX] == Fase[ChaveY3][ChaveX3]){//identificador da chave
				Fase[ChaveY3][ChaveX3] = ' ';//Retirar chave
				Fase[PortaY3][PortaX3] = '=';//Porta aberta
			}
			if(PlayerY == BotaoY && PlayerX == BotaoX){
				Fase[BotaoY][BotaoX] = ' ';
				for(i = 0; i < Linha; i++){
					for(j = 0; j < Coluna; j++){
						if(Fase[i][j] == '#'){
							Fase[i][j] = ' ';
						}
					}
				}
			}
			if(PlayerY == PortalY && PlayerX == PortalX){
				PlayerY = PortalY2;
				PlayerX = PortalX2 - 1;
			}
			if(PlayerY == PortalY2 && PlayerX == PortalX2){
				PlayerY = PortalY;
				PlayerX = PortalX - 1;
			}
			if(PlayerY == PortalY3 && PlayerX == PortalX3){
				PlayerY = PortalY4 + 1;
				PlayerX = PortalX4;
			}
			if(PlayerY == PortalY4 && PlayerX == PortalX4){
				PlayerY = PortalY3 - 1;
				PlayerX = PortalX3;
			}
			break;
		}
		case'c':{
			if((BossY == PlayerY - 1 || BossY == PlayerY + 1) || (BossX == PlayerX - 1 || BossX == PlayerX + 1)){
				VidaBoss--;
			}
			break;
		}
	}
}
//Void para a morte do personagem
void Morte(char Fase[Linha][Coluna]){
	if((PlayerY == MonstroN1_1Y && PlayerX == MonstroN1_1X) || (PlayerY == MonstroN1_2Y && PlayerX == MonstroN1_2X) || (PlayerY == MonstroN2_1Y && PlayerX == MonstroN2_1X) || (PlayerY == BossY && PlayerX == BossX) || Fase[PlayerY][PlayerX] == '#'){//Interacao com monstro
		vida--;
		PlayerY = StartY;
		PlayerX = StartX;
	}
}
//Void para o movimento do monstro nivel 2
void MonstroN2(char Fase[Linha][Coluna]){
	if(MonstroN2_1Y != PlayerY){
		if(z == 2){
			if(PlayerY - MonstroN2_1Y < 0){
				if(Fase[MonstroN2_1Y - 1][MonstroN2_1X] == ' ' || Fase[MonstroN2_1Y - 1][MonstroN2_1X] == '&'){
					MonstroN2_1Y--;
				}
				z = 0;
			} else{
				if(Fase[MonstroN2_1Y + 1][MonstroN2_1X] == ' ' || Fase[MonstroN2_1Y + 1][MonstroN2_1X] == '&'){
					MonstroN2_1Y++;
				}
				z = 0;
			}
		}
	} else {
		if(z == 2){
			if(PlayerX - MonstroN2_1X < 0){
				if(Fase[MonstroN2_1Y][MonstroN2_1X - 1] == ' ' || Fase[MonstroN2_1Y][MonstroN2_1X - 1] == '&'){
					MonstroN2_1X--;
				}
				z = 0;
			} else{
				if(Fase[MonstroN2_1Y][MonstroN2_1X + 1] == ' ' || Fase[MonstroN2_1Y][MonstroN2_1X + 1] == '&'){
					MonstroN2_1X++;
				}
				z = 0;
			}
		}
	}
	z++;
}
//Void para o movimento do monstro nivel 1
void MonstroN1(char Fase[Linha][Coluna]){
	int MoviMonstro;//Variavel para armazenar o movimento do monstro 1
	int MoviMonstro2;//Variavel para armazenar o movimento do monstro 2
	srand(time(NULL));
	MoviMonstro = rand()%5 + 1;//Gerar um movimento aleatorio para o monstro 1
	switch(MoviMonstro){//Ler o movimento
		case 1:{
			if(Fase[MonstroN1_1Y - 1][MonstroN1_1X] == ' ' || Fase[MonstroN1_1Y - 1][MonstroN1_1X] == '&'){//Indentificardo de espaco livre
			MonstroN1_1Y--;//Mover para cima
			}
			break;
		}
		case 2:{
			if(Fase[MonstroN1_1Y + 1][MonstroN1_1X] == ' ' || Fase[MonstroN1_1Y + 1][MonstroN1_1X] == '&'){//Indentificardo de espaco livre
			MonstroN1_1Y++;//Mover para baixo
			}
			break;
		}
		case 3:{
			if(Fase[MonstroN1_1Y][MonstroN1_1X - 1] == ' ' || Fase[MonstroN1_1Y][MonstroN1_1X - 1] == '&'){//Indentificardo de espaco livre
			MonstroN1_1X--;//Mover para o lado esquerdo
			}
			break;
		}
		case 4:{
			if(Fase[MonstroN1_1Y][MonstroN1_1X + 1] == ' ' || Fase[MonstroN1_1Y][MonstroN1_1X + 1] == '&'){//Indentificardo de espaco livre
			MonstroN1_1X++;//Mover para o lado direito
			}
			break;
		}
	}
	MoviMonstro2 = rand()%5 + 1;//Gerar um movimento aleatorio para o monstro 2
	switch(MoviMonstro2){//Ler o movimento
		case 1:{
			if(Fase[MonstroN1_2Y - 1][MonstroN1_2X] == ' ' || Fase[MonstroN1_2Y - 1][MonstroN1_2X] == '&'){//Indentificardo de espaco livre
			MonstroN1_2Y--;//Mover para cima
			}
			break;
		}
		case 2:{
			if(Fase[MonstroN1_2Y + 1][MonstroN1_2X] == ' ' || Fase[MonstroN1_2Y + 1][MonstroN1_2X] == '&'){//Indentificardo de espaco livre
			MonstroN1_2Y++;//Mover para baixo
			}
			break;
		}
		case 3:{
			if(Fase[MonstroN1_2Y][MonstroN1_2X - 1] == ' ' || Fase[MonstroN1_2Y][MonstroN1_2X - 1] == '&'){//Indentificardo de espaco livre
			MonstroN1_2X--;//Mover para o lado esquerdo
			}
			break;
		}
		case 4:{
			if(Fase[MonstroN1_2Y][MonstroN1_2X + 1] == ' ' || Fase[MonstroN1_2Y][MonstroN1_2X + 1] == '&'){//Indentificardo de espaco livre
			MonstroN1_2X++;//Mover para o lado direito
			}
			break;
		}
	}
}
//Poder do Boss
void Poder1(char Fase[Linha][Coluna]){
	int PoderY;
	int PoderX;
	int p;
	int q;
	int k;
	int c;
	srand(time(NULL));
	if(Fase[BotaoY][BotaoX] == ' '){
		for(i = 0; i < 120; i++){
			if(g == 1){
				PoderY = rand()%40;
				PoderX = rand()%40;
			}
			if(Fase[PoderY][PoderX] == ' ' && (PoderY != BotaoY && PoderX != BotaoX)){
				if(g == 1){
					Fase[PoderY][PoderX] = '!';
				}
			}
			if(g == 2){
				for(p = 0; p < Linha; p++){
					for(q = 0; q < Coluna; q++){
						if(Fase[p][q] == '!'){
							Fase[p][q] = '#';
						}
					}
				}
			} else if(g == 4){
				for(k = 0; k < Linha; k++){
					for(c = 0; c < Coluna; c++){
						if(Fase[k][c] == '#'){
							Fase[k][c] = ' ';
						}
					}
				}
				g = 0;
			}
		}
		g++;
	}
}
//Boss final
void BossFight(char Fase[Linha][Coluna]){
	if(VidaBoss == 4){
		BossY = 17;
		BossX = 17;
	} else if(VidaBoss == 3){
		BossY = 16;
		BossX = 21;
	} else if(VidaBoss == 2){
		BossY = 27;
		BossX = 31;
	} else{
		BossY = 35;
		BossX = 17;
	}
}
//Tela para morte
void TelaMorte(){
	if(vida == 0){
		z = 0;
		g = 0;
		vida = 3;
		VidaBoss = 4;
		Pular = 0;
		StartY = 4;
		StartX = 8;
		PlayerY = 4;
		PlayerX = 8;
		ChaveY = 1;
		ChaveX = 8;
		ChaveY2 = 8;
		ChaveX2 = 8;
		ChaveY3 = 4;
		ChaveX3 = 1;
		PortaY = 6;
		PortaX = 6;
		PortaY2 = 1;
		PortaX2 = 4;
		PortaY3 = 9;
		PortaX3 = 5;
		BotaoY = 16;
		BotaoX = 8;
		MonstroN1_1Y = 6;
		MonstroN1_1X = 8;
		MonstroN1_2Y = 3;
		MonstroN1_2X = 2;
		MonstroN2_1Y = 50;
		MonstroN2_1X = 50;
		BossY = 50;
		BossX = 50;
		PortalY = 50;
		PortalX = 50;
		PortalY2 = 50;
		PortalX2 = 50;
		PortalY3 = 50;
		PortalX3 = 50;
		PortalY4 = 50;
		PortalX4 = 50;
		Linha = 10;
		Coluna = 10;
		for(i = 0; i < 10; i++){
			for(j = 0; j < 10; j++){
				Fase1[i][j] = FaseUm[i][j];
			}
		}
		for(i = 0; i < 20; i++){
			for(j = 0; j < 20; j++){
				Fase2[i][j] = FaseDois[i][j];
			}
		}
		for(i = 0; i < 40; i++){
			for(j = 0; j < 40; j++){
				Fase3[i][j] = FaseTres[i][j];
			}
		}
		int ERRO = 1;
		while(ERRO == 1){
			system("cls");
			printf("VOCE MORREU!!!\n\nDeseja tentar novamente?\n(a) Sim\n(v) Nao\nSua Escolha: ");
			scanf(" %c", &escolha);
			if(escolha == 'a' || escolha == 'v'){
				ERRO = 0;
			} else{
				printf("Opcao invalida!");
				system("pause>null");
			}
		}
	}	
}
//Void para a organizacao do jogo
void Jogo(){
	if(Pular == 1){
		system("cls");
		printf("Voce ouve lentamnete pigos de agua cairem no chao, seus olhos parecem muito pesados para conseguir abri-los mas mesmo assim tenta forca-los.\nQuando a luz entra pelos seus olhos, voce percebe que esta em um calabouco com varias celas, sua roupa esta amassada e rasgada e as algemas\nque deveriam estar segurando o seu ser aquele lugar esta aberta,\ntudo que voce encontra e uma chave, alem de ouvir alguns grunidos vindo do lado de fora da sua cela");
		system("pause>null");
	}
	while(vida > 0){
		GerarMapa(Fase1);
		printf("Sua Vida: %d", vida);
		MovimentoPlayer(Fase1);
		MonstroN1(Fase1);
		Morte(Fase1);
		if(PlayerY == PortaY3 && PlayerX == PortaX3){
			Linha = 20;
			Coluna = 20;
			StartY = 0;
			StartX = 9;
			PlayerY = 0;
			PlayerX = 9;
			ChaveY = 2;
			ChaveX = 2;
			ChaveY2 = 17;
			ChaveX2 = 17;
			ChaveY3 = 0;
			ChaveX3 = 0;
			PortaY = 11;
			PortaX = 3;
			PortaY2 = 6;
			PortaX2 = 19;
			MonstroN1_1Y = 15;
			MonstroN1_1X = 5;
			MonstroN1_2Y = 50;
			MonstroN1_2X = 50;
			MonstroN2_1Y = 4;
			MonstroN2_1X = 14;
			if(Pular == 1){
				system("cls");
				printf("Assim que voce passa pelo grande portao de ferro, uma aura assustadora toma conta do lugar.\nVoce ve uma figura alta e esguia com bracos finos e pernas longas que no momento que enxerga voce comeca a ir lentamente em sua direcao.\nVoce sente que deve passar por ela e explorar o que parecia ser uma ala medica bem precaria e suja com cacos de vidro no chao, algumas salas de cirugias e uma cama com uma cortina");
				system("pause>null");
			}
			while(vida > 0){
				GerarMapa(Fase2);
				printf("Sua Vida: %d", vida);
				MovimentoPlayer(Fase2);
				MonstroN1(Fase2);
				MonstroN2(Fase2);
				Morte(Fase2);
			if(PlayerY == PortaY2 && PlayerX == PortaX2){
				Linha = 40;
				Coluna = 40;
				StartY = 3;
				StartX = 0;
				PlayerY = 3;
				PlayerX = 0;
				ChaveY = 18;
				ChaveX = 1;
				ChaveY2 = 1;
				ChaveX2 = 23;
				ChaveY3 = 0;
				ChaveX3 = 0;
				PortaY = 15;
				PortaX =15;
				PortaY2 = 13;
				PortaX2 = 24;
				BotaoY = 27;
				BotaoX = 31;
				PortalY = 9;
				PortalX = 17;
				PortalY2 = 2;
				PortalX2 = 38;
				PortalY3 = 18;
				PortalX3 = 24;
				PortalY4 = 20;
				PortalX4 = 24;
				MonstroN1_1Y = 28;
				MonstroN1_1X = 16;
				MonstroN1_2Y = 35;
				MonstroN1_2X = 5;
				MonstroN2_1Y = 5;
				MonstroN2_1X = 22;
				if(Pular == 1){
					system("cls");
					printf("No momento em que voce abre a porta, um silencio ensurdecedor toma conta da sua mente, tudo parecia estar errado ate a sua presenca.\nVoce poe o pe na sala e a porta atras de voce se fecha, sua visao se adapta ao ambiente escuro e voce enxerga varia estacas saindo do chao e no final da sala oque parecia ser um portal que absorvia tudo a sua volta. Porem oque mais incomodava voce era os olhos de uma entidade ameacadora que olhava para voce atraves das frestas da janela de uma sala.\nOque quer que seja aquilo, nao deveria estar ali");
					system("pause>null");
					system("cls");
					printf("M I S S A O  U R G E N T E\nDerrotar a criatura a sua frente\n\nComandos: Use a tecla (c) para Disparar seus socos na entidade e preste atencao a Barra de Vida");
					system("pause>null");
				}
				while(vida > 0){
					GerarMapa(Fase3);
					BarraVidaBoss();
					printf("\n\nS U A  V I D A: %d", vida);
					MovimentoPlayer(Fase3);
					MonstroN1(Fase3);
					MonstroN2(Fase3);
					BossFight(Fase3);
					Poder1(Fase3);
					Morte(Fase3);
					if(VidaBoss == 0){
						system("cls");
						printf("No momento que voce soca pela ultima a entidade, ela emite um som estridente que faz seus timpanos sangrarem deixando voce desnorteado.\nNo momento que voce recobra a conciencia, seu olhar vai levantando lentamente e quando sua visao foca na entidade novamente,\nvoce reconhece o rosto que esta a sua frente");
						system("pause>null");
						system("cls");
						printf("O rosto que voce reconhece e O  S E U  P R O P I O  R O S T O");
						system("pause>null");
						system("cls");
						printf("Quando voce percebe, sua boca comeca a sangrar e sua visao fica embacado ate escurecer completamente e voce perder sua conciencia completamente");
						system("pause>null");
						system("cls");
						printf("OBRIGADO POR JOGAR");
						sleep(4);
						system("cls");
						printf("Jogo feito por:\n-PauloRicardo da Rocha Cunha\n-Joao Felipe Tavora Dias");
						sleep(4);
						system("cls");
						printf("Projeto Dangeon Crawler feito por:\n-Pedro Girotto\n-Ricardo Casseb");
						sleep(4);
						exit(0);
					}
				}
			}	
			}
		}
	}
	TelaMorte(Fase1);
}

int main(int argc, char *argv[]) {
	//BackUp das fases
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			FaseUm[i][j] = Fase1[i][j];
		}
	}
	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			FaseDois[i][j] = Fase2[i][j];
		}
	}
	for(i = 0; i < 40; i++){
		for(j = 0; j < 40; j++){
			FaseTres[i][j] = Fase3[i][j];
		}
	}
	//Laco para o menu
	while(1){
		system("cls");
		printf("Menu:\n(a) Jogar\n(b) Tutorial\n(c) Sair\nSua escolha: ");
		scanf(" %c", &escolha);//Registrador da escolha do usuario
		//Leitor da escolha do usuario
		switch(escolha){
			case'a':{
				while(escolha == 'a'){
				Jogo();//Funcao do Jogo
				TelaMorte();	
				}
				break;
			}
			case'b':{
				//Tutorial do jogo
				system("cls");
				printf("Seu objetivo e passar por todas as fases e chegar ao final do jogo,\npara isso voce precisara atrevessar por varios obstaculos, como monstros nivel 1(X), nivel 2(V) e espinhos(#),\nalem disso voce precisara usar a tecla (i) para interagir e pegar as chaves(@) para abrir as portas(D) e utilizar os teletransportes(>/<) e os botoes(O) para conseguir progredir");
				system("pause>null");//Aguardar confirmacao da leitura do usuario
				break;
			}
			case'c':{
				exit(0);//Fechar Programa
				break;
			}
		}
	}
	return 0;
}
