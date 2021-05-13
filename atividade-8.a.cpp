#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int pedeIdentificacao();
float pedePreco();
int pedeQuantidadeProdutos();

int main(){
	int quantidadeProdutos = pedeQuantidadeProdutos();
	float preco = 0.0;
	int idProduto = 0;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(int i = 1; i <= quantidadeProdutos;i++){
		printf("--------%i° produto--------\n\n", i);
		idProduto = pedeIdentificacao();
		preco = pedePreco();
		printf("\n\n");
		printf("O produto de id %i tem agora um preço de %.2lf\n\n", idProduto, preco * 1.10);
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
	while(true){
		printf("Digite a o preço do produto: ");
		scanf("%f", &preco);
		fflush(stdin);
		if(preco > 0) break;
		else printf("Preço inválido, tente novamente...\n");
	}
	return preco;
}

int pedeQuantidadeProdutos(){
	int quantidadeProdutos = 0;
	while(true){
		printf("Digite a quantidade de produtos: ");
		scanf("%i", &quantidadeProdutos);
		fflush(stdin);
		if(quantidadeProdutos > 0){
			break;
		} 
		printf("O valor digitado é inválido, tente novamente.\n");
	}
	return quantidadeProdutos;
}
