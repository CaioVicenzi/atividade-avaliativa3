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
	printf("Digite o número: ");
	scanf("%i", &numero);
	
	int contador = 0;
	fatorialDoNumero = 1;
	while(contador < numero){
		fatorialDoNumero = fatorialDoNumero * (numero - contador);
		
		contador++;
	}
	pulaLinha();
	
	
	printf("O fatorial do número que você digitou é %i", fatorialDoNumero);
	
	pulaLinha();
	
	system("PAUSE");	
	return 0;
}

void pulaLinha(){
	printf("\n");
}
