//		11. Voc� foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
//	piadas. Estar�o concorrendo ao pr�mio 3 finalistas, cujos nomes ser�o fornecidos. A
//	quantidade de ju�zes ser� definida no dia da apura��o e para cada juiz o algoritmo solicitar� a
//	nota para cada candidato. A nota poder� variar de 0 (zero) a 100(cem). O algoritmo dever�
//	apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
//	vencedor ap�s o voto de todos os ju�zes.

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
	
	printf("Digite os nomes dos tr�s finalistas: ");
	fgets(finalista1, 50, stdin);
	fgets(finalista2, 50, stdin);
	fgets(finalista3, 50, stdin);
	
	printf("Digite a quantidade de ju�zes: ");
	scanf("%i", &quantidadeJuizes);
	fflush(stdin);
	
	int contador = 1;
	for(int i = 0; i < quantidadeJuizes; i++){
		pulaLinha();
		printf("---------ju�z n�%i---------", contador);
		pulaLinha();
		pontosFinalista1 = pontosFinalista1 + pedeNotaFinalista(finalista1);
		pontosFinalista2 = pontosFinalista2 + pedeNotaFinalista(finalista2);
		pontosFinalista3 = pontosFinalista3 + pedeNotaFinalista(finalista3);
		contador ++;
		pulaLinhas(2);
	}
	
	printf("--------Pontua��o--------"); pulaLinha();
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
			printf("Nota digitada � inv�lida, tente novamente...");	
			pulaLinha();
		}
	}
	
	return notaFinalista;		
	
}

