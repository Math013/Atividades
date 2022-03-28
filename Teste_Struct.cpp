#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char nome[70];
	float peso;
	float altura;
	int idade;
	char tipo_sanguineo[3];

} Pessoa;

Pessoa pes1, pes2;

int main()
{
	
	// Pessoa 1
	printf("Digite seu nome: ");
	fgets(pes1.nome, 70, stdin);
	pes1.nome[strlen(pes1.nome)-1] = '\0';
	fflush(stdin);

	printf("Digite seu peso: ");
	scanf("%f", &pes1.peso);
	fflush(stdin);

	printf("Digite sua altura: ");
	scanf("%f", &pes1.altura);
	fflush(stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &pes1.idade);
	fflush(stdin);
	
	printf("Digite seu tipo sanguineo: ");
	fgets(pes1.tipo_sanguineo, 3, stdin);
	pes1.tipo_sanguineo[strlen(pes1.tipo_sanguineo)-1] = '\0';
	fflush(stdin);
	
}


