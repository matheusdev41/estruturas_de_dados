// Programa ficha aluno

// Decrlaração de bibliotecas
#include <stdio.h> // funções de entrada e saída

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

// Declaração da struct
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
		
	// Declaração da variável aluno do tipo struct ficha_aluno
	// Vetor de struct de 2 posições
	struct ficha_aluno aluno[2]; // em cada posição do vetor aluno,  
							     // vou ter os dados da struct ficha_aluno
	
	int i;
	
	// Função printf - impresão em tela
	// Função scanf - leitura de dados do teclado 
	
	printf("\n Ficha do Aluno \n");
	
	for(i=;0 i<2; i++)
	{
		printf("Matrícula do aluno: ");
		scanf("%d", &aluno[i].matricula);
		
		printf("Nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		
		printf
	}
}
	


