#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	char nome[20];
	
	setlocale(LC_ALL,"Portuguese");
		
	printf("Entre com seu nome: ");
	fgets(nome, 20, stdin);
	nome[strlen(nome)-1] = '\0';
	printf("Seu nome � %s e seu tamanho � de %d caracteres", nome, strlen(nome));
	
	
}
