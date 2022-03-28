#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{	
	
	char palavra[200];
	int tamanho, i;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Escreva uma palavra: ");
	fgets(palavra, 200, stdin);
	
	tamanho = strlen(palavra);
	
	printf("Você escreveu %s", palavra);
	
	
	for(i=tamanho; i>=0; i--)
	{
		printf("%c", palavra[i]);
	}
	return 0;
}
