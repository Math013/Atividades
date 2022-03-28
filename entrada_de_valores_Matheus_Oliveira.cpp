/***********************************************************************************************************************************************************************************
*																																													*
*	Programa: entrada_de_valores_Matheus_Oliveira.cpp																																												*
*																																													*		
*	Integrantes: Matheus Oliveira Nonato da Silva																																	*
*				 Pedro Lucas Ribeiro Neto																																			*
*				 Marcelo Camargo da Silva																																			*
*	  																																												*
*	Objetivo: Entrar com valores inteiros e informar ao usuário a quantidade de números digitados e sua média aritmética.															*
*																																													*
*	Data de Criação: 21/09/2021																																						*
*																																													*
*	Desenvolvido por: Matheus Oliveira Nonato da Silva																																*
*					  Pedro Lucas Ribeiro Neto																																		*
*					  Marcelo Camargo da Silva																																		*
*																																													*
*																																													*
*																																													*
************************************************************************************************************************************************************************************/






#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char num[20];
	int N,uni=0, dez=0, cen=0, mi=0, dmi=0, soma=0, cont=0;
	
	printf(" Desenvolvido por:\n");
	printf(" Matheus Oliveira Nonato da Silva\n Pedro Lucas Ribeiro Neto\n Marcelo Camargo da Silva\n\n");
	
	do
	{
		printf("Entre com um valor inteiro positivo\n");
		printf("ou digite 0(Zero) para finalizar o programa => ");
		fgets(num, 20, stdin); 
	
		N = atoi(num); // Conversão de String para Int
		
		if(N == '\0' && cont == 0) // Verifica se int não é nulo
		{
			printf(" Atenção !!!! Você não digitou nenhum número.\n");
			break;
		}
		if(N == 0)
		{
			break;
		}
		// Condições 
		else if(N >= 0 && N <= 9) 
		{
			cont++;
			uni++;
			soma += N;
		}
		else if(N>=10 && N <= 99)
		{
			cont++;
			dez++;
			soma += N;
		}
		else if(N>=100 && N <= 999)
		{
			cont++;
			cen++;
			soma += N;
		}
		else if(N>=1000 && N <= 10000)
		{
			cont++;
			mi++;
			soma += N;
		}
		else if(N > 10000)
		{
			cont++;
			dmi++;
			soma += N;
		}
		else
		{
			printf("Atenção!!! Você digitou um valor inválido\n");
		}
		
	}while(N != 0 && num[strlen(num)] == '\0');
	
	if(cont >= 1) // Mostra os valores digitados apenas se o usuário digitar um valor positivo
	{
		printf("Você digitou %d números, sendo que:", cont);
		printf("\n	Você digitou %d números entre 1 e 9.", uni);
		printf("\n	Você digitou %d números entre 10 e 99.", dez);
		printf("\n	Você digitou %d números entre 100 e 999.", cen);
		printf("\n	Você digitou %d números entre 1.000 e 10.000.", mi);
		printf("\n	Você digitou %d números maiores que 10.000.", dmi);
		printf("\nO cálculo da média dos números digitados é => %.2f", (float) soma/cont);
	}
}
