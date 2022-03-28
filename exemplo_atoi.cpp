#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	int n;
	char numero[20], i;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Entre com um valor inteiro: ");
	fgets(numero, 20, stdin);
	numero[strlen(numero)-1] = '\0';
	
	n = atoi(numero);
	
	printf("\n O número convertido ficou: %d", n);
}
