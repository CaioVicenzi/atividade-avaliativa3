#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int pedirFruta();
void pulaLinhas(int numeroDeLinhas);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int frutaId = 3;
	int quantidadeAbacaxi = 0;
	int quantidadeMaca = 0;
	int quantidadePera = 0;
	bool frutaIdNaoEhZero = false;

	do{
		int frutaId = pedirFruta();
		switch (frutaId){
			case 1: quantidadeAbacaxi++; break;
			case 2: quantidadeMaca++; break;
			case 3: quantidadePera++; break; 
		}
		frutaIdNaoEhZero = frutaId != 0;	
	} while(frutaIdNaoEhZero); // Quando o Id da fruta digitada pelo usuário for 0, o laço se rompe.
	
	pulaLinhas(1);
	
	// Exibindo os dados obtivos para o usuário
	printf("Você comprou %i abacaxi(s), %i maçã(s) e %i pera(s)", quantidadeAbacaxi, quantidadeMaca, quantidadePera);
	
	pulaLinhas(2);
	system("PAUSE");	
}

int pedirFruta(){
	int fruta;
	bool frutaEhValida = false;
	do{	
		printf("Digite o número da fruta: ");
		scanf("%i", &fruta);
		fflush(stdin);
		frutaEhValida = fruta < 4 && fruta >= 0;
		if(!frutaEhValida) {
			printf("Fruta indisponível, tente novamente...");
			pulaLinhas(2);
		}
	} while(!frutaEhValida);
	return fruta;
}

void pulaLinhas(int numeroDeLinhas){
	// para cada linha digitada pelo usuário
	for(int i = 0; i < numeroDeLinhas; i++){
		//pula uma linha (da um Enter)
		printf("\n");
	}
}
