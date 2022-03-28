#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

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
	setlocale(LC_ALL, "Portuguese");	
	// Pessoa 1
	printf("1ª Pessoa: ");
	printf("\nDigite seu nome: ");
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
	
	// Pessoa 2	
	printf("2ª Pessoa: ");
	printf("\nDigite seu nome: ");
	fgets(pes2.nome, 70, stdin);
	pes2.nome[strlen(pes2.nome)-1] = '\0';
	fflush(stdin);

	printf("Digite seu peso: ");
	scanf("%f", &pes2.peso);
	fflush(stdin);

	printf("Digite sua altura: ");
	scanf("%f", &pes2.altura);
	fflush(stdin);
	
	printf("Digite sua idade: ");
	scanf("%d", &pes2.idade);
	fflush(stdin);
	
	printf("Digite seu tipo sanguineo: ");
	fgets(pes2.tipo_sanguineo, 3, stdin);
	pes2.tipo_sanguineo[strlen(pes2.tipo_sanguineo)-1] = '\0';
	fflush(stdin);
	
	printf("\nPessoa 1");
	printf("\nNome: %s", pes1.nome);
	printf("\nPeso: %.2f", pes1.peso);
	printf("\nAltura: %.2f", pes1.altura);
	printf("\nIdade: %d", pes1.idade);
	printf("\nTipo sanguineo: %s", pes1.tipo_sanguineo);
	
	printf("\nPessoa 2");
	printf("\nNome: %s", pes2.nome);
	printf("\nPeso: %.2f", pes2.peso);
	printf("\nAltura: %.2f", pes2.altura);
	printf("\nIdade: %d", pes2.idade);
	printf("\nTipo sanguineo: %s", pes2.tipo_sanguineo);
	
	printf("\nA média de idade de %s e %s é de %.2f", pes1.nome, pes2.nome, (float) (pes1.idade + pes2.idade) / 2);
	
}



