#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, multiplicacao;
	
	printf("------------------------------------\n");
	printf("Programa de calcular a multiplicação\n");
	printf("----------------------------------\n\n");
	printf("Digite o primeiro número: ");
	scanf("%i", &n1);
	printf("Digite o segundo número: ");
	scanf("%i", &n2);
	
	multiplicacao = 0;
	
	for(int i = 0; i<n2;i++){
		multiplicacao = multiplicacao + n1;
	}
	
	printf("O resultado da multiplicacao é %i", multiplicacao);
	
	system("PAUSE");	
	return 0;
}

