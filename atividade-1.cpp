#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

void pulaLinha();

int main(){
	int numero, fatorialDoNumero;
	
	setlocale(LC_ALL, "Portuguese");
	printf("-------------------------------");
	pulaLinha();
	printf("Programa de calcular o fatorial");
	pulaLinha();
	printf("-------------------------------");
	pulaLinha();
	pulaLinha();
	printf("Digite o n�mero: ");
	scanf("%i", &numero);
	
	fatorialDoNumero = 1;
	for(int contador = 0; contador < numero ; contador++){
		fatorialDoNumero = fatorialDoNumero * (numero - contador);
	}

	pulaLinha();
	
	
	printf("O fatorial do n�mero que voc� digitou � %i", fatorialDoNumero);
	
	pulaLinha();
	
	system("PAUSE");	
	return 0;
}

void pulaLinha(){
	printf("\n");
}
