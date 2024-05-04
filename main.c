#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char escolha;
	int  UmfaseI[5];
	
	while(escolha!='c'){
	
	
	printf("Menu:\n");
	printf("a) iniciar game\n");
	printf("b)Tutorial/Hisoria\n");
	printf("c) Sair: \n ");
	scanf(" %c", &escolha);
	
if(escolha== 'a'){
	printf("jubileu");
   }
	
	else if(escolha=='b'){ char op;
	
	
	printf("h) historia\n");
	printf("t) tutorial\n");
	printf("v) voltar: ");
     scanf(" %c", &op);

     if (op=='h'){ printf("basicamente a historia");
	}
  

	}
	
	
	
 getch();
 system("cls");
}








	
	return 0;
}
