#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int pedeIdentificacaoProduto();
float pedePrecoProduto();
char perguntaSeTemMaisUmProduto();

int main(){
	float precoProduto = 0.0;
	int idProduto = 0;
	char temMaisAlgumProduto;
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 1;
	
	do{
		printf("--------%i° produto--------\n\n", contador);
		idProduto = pedeIdentificacaoProduto();
		precoProduto = pedePrecoProduto();
		printf("\n\n");
		printf("O produto de id %i tem agora um preço de %.2lf\n", idProduto, precoProduto * 1.10);
		temMaisAlgumProduto = perguntaSeTemMaisUmProduto();
		printf("\n\n");
		contador++;	
	} while(temMaisAlgumProduto == 's');
	
	printf("Programa encerrado.\n");
	system("PAUSE");	
	return 0;
}

int pedeIdentificacaoProduto(){
	int identificacao = 0;
	printf("Digite a identificação do produto: ");
	scanf("%i", &identificacao);
	fflush(stdin);
	return identificacao;
}

float pedePrecoProduto(){
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

char perguntaSeTemMaisUmProduto(){
	char temMaisUmProduto;
	while(true){
		printf("Tem mais algum produto? (s -> sim, n -> não): ");
		scanf("%c", &temMaisUmProduto);
		fflush(stdin);
		if(temMaisUmProduto == 's' || temMaisUmProduto == 'n'){
			break;
		} 
		printf("O valor digitado é inválido, tente novamente...\n");
	}
	return temMaisUmProduto;
}
