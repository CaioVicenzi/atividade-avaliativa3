#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int quantidadeDeNumeros = 0; 
	int numeroDigitado;

	for(int i = 0; i < 100; i++){ // o bloco de código a seguir vai ser executado 100 vezes
		printf("Digite um número: "); 
		scanf("%i", &numeroDigitado);
		quantidadeDeNumeros++;
		if(numeroDigitado < 0){ //caso o numero digitado pelo usuário seja negativo (menor que 0) o laço quebra 
			break;
		}
	}
	
	if(quantidadeDeNumeros == 1){
		printf("Foi recebido apenas 1 número.\n\n");
	} else{ 
		printf("Foram recebidos %i numeros\n\n", quantidadeDeNumeros);
	}
	
	system("PAUSE");	
	return 0;
}


