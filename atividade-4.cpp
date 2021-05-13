//  4. Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido
// pelo usuário.

#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int pedeN();

int main(){
	int n = 0;
	float h = 0;
		
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número: ");
	scanf("%i", &n);

	int contador = 1;

	while(contador <= n){
		h = h + (1.0/contador);
		contador++;
	}
	
	printf("\nO valor de h é: %.4lf\n", h);
	system("PAUSE");	
	return 0;
}

