#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	char num[20];
	int N;
	printf("Escreva um número inteiro: ");
	gets(num);
	
	if(strlen(num) == '\0')
	{
		printf("Escreva um valor inteiro!!!");	
	}	
		N = atoi(num);
		printf("Você digitou: %d", N);
	
}
