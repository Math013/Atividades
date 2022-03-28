/***********************************************************************************************************************************************************************************
*																																													*
*	Programa: calcula_digito_verificador_MATHEUS_OLIVEIRA.cpp																														*
*																																													*		
*	Integrantes: Matheus Oliveira Nonato da Silva																																	*
*				 Pedro Lucas Ribeiro Neto																																			*
*				 Marcelo Camargo da Silva																																			*
*	  																																												*
*	Objetivo: Calculo do Dígito verificador a partir da String digitada pelo usuário																								*
*																																													*
*	Data de Criação: 7/11/2021																																						*
*																																													*
*	Desenvolvido por: Matheus Oliveira Nonato da Silva																																*
*					  Pedro Lucas Ribeiro Neto																																		*
*					  Marcelo Camargo da Silva																																		*
*																																													*
*																																													*
*																																													*
************************************************************************************************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

//int calcula_dv(char x[30]);
int calcula_dv(char x[30])
{
	//long c;
	//double c;
	int tam, res, s=0, m=2, c=0; // (TAM: ÍNDICE DA STRING); (RES: VALOR DO CALCULO FINAL); (S: SOMA O RESULTADO DAS MULTIPLICAÇÕES); (M: MULTPLICA ENTRE 2 E 9); (C: VALOR DE CARAC(STRING) CONVERTIDO EM INT) 
	char carac; // VARIÁVEL QUE VAI RECEBER A STRING
	tam = strlen(x);
	
	do
	{
		if(x[tam] >= '0' && x[tam] <= '9') // VERIFICA SE O CHAR É UM ALGARISMO
		{		
			carac = x[tam]; // SE FOR ALGARISMO, SERÁ CONVERTIDO EM INT
			//c = atol(carac); // ERRO: INVALID CONVERSION FROM 'CHAR' TO 'CONST CHAR*'
			//c = atof(carac); // ERRO: INVALID CONVERSION FROM 'CHAR' TO 'CONST CHAR*'
			//c = atoi(carac); // ERRO: INVALID CONVERSION FROM 'CHAR' TO 'CONST CHAR*'
			c = int(carac) - '0'; //CONVERSÃO - CAST; CALCULO DA TABELA ASCII
			s += c * m; // MULTIPLICAÇÃO ATRIBUIDO NA VARIAVEL S
			if(m < 9) // MULTIPLICAÇÃO DO 2 AO 9
			{
				m++;
			}
			else
			{
				m=2;
			}		
		} 
		tam--;
	}while(tam >= 0); // LOOPING VERIFICADOR
	if(s == 0) // VERIFICA SE POSSUI DIGITOS INVÁLIDOS 
	{
		return -1;
	}
	else
	{ 
		// CALCULO E CHAMADA POR VALOR
		s *= 10;
		res = s % 11;
		return res;
	}
	
}

int main()
{
 	setlocale(LC_ALL,"Portuguese");
 	//DECLARAÇÃO DE VARIAVEL
 	char txt[30];
 	int d, c=0;
 	
	printf("Desenvolvido por:\n");
	printf("Matheus Oliveira Nonato da Silva\nPedro Lucas Ribeiro Neto\nMarcelo Camargo da Silva\n\n");
 	
 	do
 	{
 		printf("\nDigite 'FIM' para encerrar o programa.");
		printf("\nEntre com uma string com valores decimais (máximo 30 caracteres): ");
		scanf("%s", &txt);
		calcula_dv(strupr(txt)); // SE O USUÁRIO ENTRAR COM UM VALOR 'FIM' IRÁ PASSAR PELA FUNÇÃO 'strupr' ONDE A STRING IRÁ FICAR MAIUSCULA, CASO CONTRÁRIO, VAI PASSAR PELA FUNÇÃO 'calcula_dv'

		if(strcmp(txt, "FIM") == 0) // SE A ENTRADA 'TXT' FOR FIM IRÁ ACRESCENTAR 1 NA VARIÁVEL 'C'
		{
			c++;
		}
		else
		{
			d = calcula_dv(txt); // LEITURA DA STRING INFORMADA PELO USUARIO, PASSANDO PELA FUNÇÃO
			if(d >= 0)
			{
				printf("DV calculado com sucesso: %s-%d\n", txt, d); // RETORNO DA FUNÇÃO COM SUCESSO 
			}
			else
			{
				printf("Atenção!! Valor não informado!\n"); // SE O USUÁRIO NÃO INFORMAR NENHUM VALOR
			}
		}	
				
	 }while(c != 1); // ENQUANTO A VARIÁVEL 'C' FOR DIFERENTE DE 1, IRÁ REPETIR.
}




