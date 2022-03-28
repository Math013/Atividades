/***********************************************************************************************************************************************************************************
*																																													*
*	Programa: 																																										*
*																																													*		
*	Integrantes: Matheus Oliveira Nonato da Silva																																	*
*				 Pedro Lucas Ribeiro Neto																																			*
*				 Marcelo Camargo da Silva																																			*
*	  																																												*
*	Objetivo: 																																										*
*																																													*
*	Data de Criação: 7/11/2021																																						*
*																																													*
*	Desenvolvido por: Matheus Oliveira Nonato da Silva																																*
*					  Pedro Lucas Ribeiro Neto																																		*
*					  Marcelo Camargo da Silva																																		*
*																																													*
*	Modificações: 																																									*
*																																													*
************************************************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

/*int calcula_dv(int n)
{
	int calcula_dv[8];
	
	calcula_dv[0] = n * 9;
	calcula_dv[1] = n * 8;
	calcula_dv[2] = n * 7;
	calcula_dv[3] = n * 6;
	calcula_dv[4] = n * 5;
	calcula_dv[5] = n * 4;
	calcula_dv[6] = n * 3;
	calcula_dv[7] = n * 2;
	
	return calcula_dv[8];
}*/



int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i, tam, cont=0, convert, n[5], result[5];
	char num[30];
	
	
	printf("Desenvolvido por:\n");
	printf("Matheus Oliveira Nonato da Silva\nPedro Lucas Ribeiro Neto\nMarcelo Camargo da Silva\n\n");
	for(i=0;i<=4;i++)
	{
		printf("Digite 'FIM' para encerrar o programa.");
		printf("\nEntre com uma string com valores decimais (máximo 30 caracteres): ");
		scanf("%s", &num[i]);
		
		n[i] = atoi(num);
		//num[strlen(num)-1] = '\0';
		cont++;
		
		printf("\n%d", n[i]);	
	}
	
	/*for(i=0;i<5;i++)
	{
		for(i=0;i<1;i++)
		{
			result = n[] * 9
		}
		
	}*/
	
	printf("\nQuantas vezes rodou: %d", cont);
	printf("\nTamanho da lista: %d\n", strlen(num));
	printf("\n A lista: %s ", num);
	
	
	
	tam = strlen(num);
	
	printf("\nContrário:");
	for(i=tam; i>=0; i--)
	{
		printf("%c", num[i]);
		
	}
	

	printf("\nLista convertida: ");
	convert = atoi(num);
	printf("\n%d", convert*2);
	
	/*for(i=0;i<5;i++)
	{
		
		
	}*/
				
	
	for(i=0;i<5;i++)
	{
		n[i] = convert;
		//printf("\n%d", n[i] * 2);
	}*/

	

	
	
	
	
	
	
	
	
	
	
	while(true)
	{
		for(i=0;i<=5;i++)
		{
			printf("Digite 'FIM' para encerrar o programa.");
			printf("\nEntre com uma string com valores decimais (máximo 30 caracteres): ");
			scanf("%s", &num[i]);
			cont++;
			
			if(n == 0 && i == 5)
			{
				break;
			}
			printf("\nQuantas vezes rodou: %d", cont);
			printf("\nTamanho da lista: %d\n", strlen(num));
			
		}
		
			n = atoi(num);
		break;
	}	
			for(i=0;i<=5;i++)
		{
			printf("%s ", &num[i]);
		}
	
}
