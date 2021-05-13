#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

bool estaDentroDasCaracteristicas(char sexo, char olhos,char cabelos, int idade ); 
//a fun��o acima foi criada para definir se uma pessoa � do sexo feminino, cabelos loiros, olhos verdes 
// e de idade entre 18 e 35 anos

float calculaPorcentagem(int total, int fracao);
//fun��o acima foi criada para calcular porcentagem entre dois valores

void imprimeAMaiorIdadeEAPorcentagem(int maiorIdade, float porcentagem);
void pulaLinha();
char pedeSexo();
char pedeCorDosOlhos();
char pedeCorDosCabelos();
int pedeIdade();

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int contadorDeEntrevistados = 0;
	int maiorIdade = 0;  
	int quantidade; // essa variavel representa a quantidade de indiv�duos do sexo feminino cuja idade 
	//est� entre 18 e 35 anos que tenham olhos verdes e cabelos loiros.
	
	while(true){
		printf("-----entrevistado n�%i--------\n\n", contadorDeEntrevistados + 1);

		char sexo = pedeSexo();
		char olhos = pedeCorDosOlhos();
		char cabelos = pedeCorDosCabelos();
		int idade = pedeIdade();
		
		if(idade < 0) break; //para que quando um cidad�o com idade negativa for informada o programa para de pedir
		// por usu�rios
		if(idade > maiorIdade) maiorIdade = idade;
		if(estaDentroDasCaracteristicas(sexo, olhos, cabelos, idade)) quantidade++; 
		contadorDeEntrevistados++;
		
		pulaLinha();
		pulaLinha();
	}

	imprimeAMaiorIdadeEAPorcentagem(maiorIdade, calculaPorcentagem(contadorDeEntrevistados, quantidade));
		
	system("PAUSE");	
	return 0;
}

bool estaDentroDasCaracteristicas(char sexo, char olhos,char cabelos, int idade ){
	return sexo == 'f' && olhos == 'v' && cabelos == 'l' && idade <= 35 && idade >= 18; 
}

float calculaPorcentagem(int total, int fracao){
	return (fracao * 100) / total;
}

void imprimeAMaiorIdadeEAPorcentagem(int maiorIdade, float porcentagem){
	printf("\n\nA maior idade encontrada �: %i\n\n", maiorIdade);
	printf("A porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos que tenham olhos verdes e cabelos loiros � %.2f%% \n\n", porcentagem);
}

void pulaLinha(){
	printf("\n");
}

char pedeSexo(){
	char sexo;

	while(true){
		printf("Digite o sexo: ");
		scanf("%c", &sexo);
		fflush(stdin);
		
		if(sexo == 'f' || sexo == 'm') break;
		else {
			printf("Sexo inv�lido, digite m para masculino ou f para feminino...");
			pulaLinha();
		}
	}

	return sexo;
}

char pedeCorDosOlhos(){
	char corDosOlhos;
	while(true){
		printf("Digite a cor dos olhos: ");
		scanf("%c", &corDosOlhos);
		fflush(stdin);
		
		if(corDosOlhos == 'a' || corDosOlhos == 'v' || corDosOlhos == 'c' || corDosOlhos == 'p') break;
		else {
			printf("Cor dos olhos inv�lida, digite a para azuis, v para verdes, p para pretos ou c para castanhos");
			pulaLinha();
		}
	}
	
	return corDosOlhos;
}

char pedeCorDosCabelos(){
	char corDosCabelos;
	while(true){
		printf("Digite a cor dos cabelos: ");
		scanf("%c", &corDosCabelos);
		fflush(stdin);
		
		if(corDosCabelos == 'l' || corDosCabelos == 'c' || corDosCabelos == 'p') break;
		else {
			printf("Cor dos cabelos inv�lida, digite l para loiros, c para castanhos ou p para pretos");
			pulaLinha();
		}
	}
	
	return corDosCabelos;
}

int pedeIdade(){
	int idade;
	while(true){
		printf("Digite a idade (em anos): ");
		scanf("%i", &idade);
		fflush(stdin);
		
		if(idade < 120) break;
		else {
			printf("Ningu�m tem mais de 120 anos!");
			pulaLinha();
		}
	}
	return idade;
}



