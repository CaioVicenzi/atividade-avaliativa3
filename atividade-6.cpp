#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

char perguntaSexo();
float perguntaNota();
void pulaLinhas(int linhas);

int main(){
	setlocale(LC_ALL, "Portuguese");

	int quantidadeAlunas = 0;
	int quantidadeAlunos = 0;
	float notaTotalAlunas = 0;
	float notaTotalAlunos = 0;
	float mediaAlunos = 0;
	float mediaAlunas = 0;
	
	int contador = 1;
	while(true){
		printf("-----------aluno nº%i-----------", contador);
		pulaLinhas(2);
		char sexo = perguntaSexo();
		float nota = perguntaNota();
		
		if(nota < 0) break;
		if(sexo == 'm'){
			quantidadeAlunos ++;
			notaTotalAlunos = notaTotalAlunos + nota;
		} else {
			quantidadeAlunas ++;
			notaTotalAlunas = notaTotalAlunas + nota;
		}
		contador++;
		pulaLinhas(1);
	}
	
	mediaAlunas = notaTotalAlunas / quantidadeAlunas; 
	mediaAlunos = notaTotalAlunos / quantidadeAlunos;
	
	pulaLinhas(2);
	printf("A media dos alunos é igual a %.2lf e a media das alunas é %.2lf", mediaAlunos, mediaAlunas);
	pulaLinhas(2);
	
	system("PAUSE");	
	return 0;
}

char perguntaSexo(){
	char sexo;
	
	while(true){
		printf("Digite o seu sexo (m ou f): ");
		scanf("%c", &sexo);
		fflush(stdin);
		if(sexo == 'f' || sexo == 'm') break;
		else{
			printf("Sexo inválido, digite m para masculino e f para feminino.");
			pulaLinhas(1);
		}	
	}
	return sexo;
}

float perguntaNota(){
	float nota;
	
	while(true){
		printf("Digite a sua nota (0 a 10): ");
		scanf("%f", &nota);
		fflush(stdin);

		if(nota <= 10) {
			break;
		}
		else{
			printf("Nota inválida, digite um valor entre 0 e 10 no padrão brasileiro.");
			pulaLinhas(1);
		}	
	}
	return nota;
}

void pulaLinhas(int linhas){
	for(int i = 0; i < linhas; i++);
	printf("\n");
}
