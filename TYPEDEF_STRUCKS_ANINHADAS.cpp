// Programa ficha aluno

// Decrlara��o de bibliotecas
#include <stdio.h> // fun��es de entrada e sa�da

int main(void)
{
	typedef struct
	{
		int dia;
		int mes;
		int ano;
	}data;
	
	typedef struct
	{
		char rua[50];
		int numero;
		char bairro[30];
		char cidade[30];
		char estado[2];
		int cep;		
	}endereco;

// Declara��o da struct
// struct <identificador>
// {
// <listagem dos tipos e membros>;
// };
	
	struct ficha_aluno
	{
		int matricula;
		char nome[50];
		char disciplina[30];
		float nota;
		
		data datanasc;
		endereco endaluno;	
	};
		
	// Declara��o da vari�vel aluno do tipo struct ficha_aluno
	// Vetor de struct de 2 posi��es
	struct ficha_aluno aluno[2]; // em cada posi��o do vetor aluno,  
							     // vou ter os dados da struct ficha_aluno
	
	int i;
	
	// Fun��o printf - impres�o em tela
	// Fun��o scanf - leitura de dados do teclado 
	
	printf("\n Ficha do Aluno \n");
	
	for(i=;0 i<2; i++)
	{
		printf("Matr�cula do aluno: ");
		scanf("%d", &aluno[i].matricula);
		
		printf("Nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		
		printf
	}
}
	


