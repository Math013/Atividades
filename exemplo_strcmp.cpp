#include <stdio.h>
#include <string.h>


int main()
{
	char texto1[100], texto2[100];
	printf("Digite o primeiro texto: ");
	fgets(texto1, 200, stdin);
	
	printf("Digite o segundo texto: ");
	fgets(texto2, 200, stdin);
	if(strcmp(texto1,texto2)==0)
	{
		printf("As strings sao iguais");
	}
	else
	{
		printf("As strings sao diferentes");
	}


}
