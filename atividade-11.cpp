//		11. Você foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
//	piadas. Estarão concorrendo ao prêmio 3 finalistas, cujos nomes serão fornecidos. A
//	quantidade de juízes será definida no dia da apuração e para cada juiz o algoritmo solicitará a
//	nota para cada candidato. A nota poderá variar de 0 (zero) a 100(cem). O algoritmo deverá
//	apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
//	vencedor após o voto de todos os juízes.

#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

void pulaLinhas(int quantidadeLinhas);
void pulaLinha();
int pedeNotaFinalista(char nomeFinalista[50]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	char finalista1[50];
	char finalista2[50];
	char finalista3[50];
	int pontosFinalista1 = 0;
	int pontosFinalista2 = 0;
	int pontosFinalista3 = 0;
	int quantidadeJuizes;
	
	printf("Digite os nomes dos três finalistas: ");
	fgets(finalista1, 50, stdin);
	fgets(finalista2, 50, stdin);
	fgets(finalista3, 50, stdin);
	
	printf("Digite a quantidade de juízes: ");
	scanf("%i", &quantidadeJuizes);
	fflush(stdin);
	
	int contador = 1;
	for(int i = 0; i < quantidadeJuizes; i++){
		pulaLinha();
		printf("---------juíz nº%i---------", contador);
		pulaLinha();
		pontosFinalista1 = pontosFinalista1 + pedeNotaFinalista(finalista1);
		pontosFinalista2 = pontosFinalista2 + pedeNotaFinalista(finalista2);
		pontosFinalista3 = pontosFinalista3 + pedeNotaFinalista(finalista3);
		contador ++;
		pulaLinhas(2);
	}
	
	printf("--------Pontuação--------"); pulaLinha();
	printf("%s - %i", finalista1, pontosFinalista1); pulaLinha();
	printf("%s - %i", finalista2, pontosFinalista2); pulaLinha();
	printf("%s - %i", finalista3, pontosFinalista3); pulaLinhas(2);
	
	system("PAUSE");	
	return 0;
}

void pulaLinhas(int numeroDeLinhas){
	for(int i = 0; i < numeroDeLinhas; i++){
		printf("\n");
	}
}

void pulaLinha(){
	pulaLinhas(1);
}

int pedeNotaFinalista(char nomeFinalista[50]){
	int notaFinalista = 0;
	while(true){
		printf("Digite a nota do %s: ", nomeFinalista);
		scanf("%i", &notaFinalista);
		fflush(stdin);
		if(notaFinalista > 0 && notaFinalista <=100) break;
		else{
			printf("Nota digitada é inválida, tente novamente...");	
			pulaLinha();
		}
	}
	
	return notaFinalista;		
	
}

