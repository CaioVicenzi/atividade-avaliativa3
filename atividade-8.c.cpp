#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int pedeIdentificacao();
float pedePreco();

int main(){
	float preco = 0.0;
	int idProduto = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1;
	while(true){
		printf("--------%i° produto--------\n\n", contador);
		idProduto = pedeIdentificacao();
		preco = pedePreco();
		printf("\n\n");
		printf("O produto de id %i tem agora um preço de %.2lf\n\n", idProduto, preco * 1.10);
		if(preco < 0) break;
		contador++;
	}
	
	printf("Programa encerrado...\n");
	system("PAUSE");	
	return 0;
}

int pedeIdentificacao(){
	int identificacao = 0;
	printf("Digite a identificação do produto: ");
	scanf("%i", &identificacao);
	fflush(stdin);
	return identificacao;
}

float pedePreco(){
	float preco = 0.0;
	printf("Digite a o preço do produto: ");
	scanf("%f", &preco);
	fflush(stdin);
	return preco;
}

