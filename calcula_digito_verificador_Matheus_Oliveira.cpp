/***********************************************************************************************************************************************************************************
*																																													*
*	Programa: calcula_digito_verificador_MATHEUS_OLIVEIRA.cpp																														*
*																																													*		
*	Integrantes: Matheus Oliveira Nonato da Silva																																	*
*				 Pedro Lucas Ribeiro Neto																																			*
*				 Marcelo Camargo da Silva																																			*
*	  																																												*
*	Objetivo: Calculo do D�gito verificador a partir da String digitada pelo usu�rio																								*
*																																													*
*	Data de Cria��o: 7/11/2021																																						*
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
	int tam, res, s=0, m=2, c=0; // (TAM: �NDICE DA STRING); (RES: VALOR DO CALCULO FINAL); (S: SOMA O RESULTADO DAS MULTIPLICA��ES); (M: MULTPLICA ENTRE 2 E 9); (C: VALOR DE CARAC(STRING) CONVERTIDO EM INT) 
	char carac; // VARI�VEL QUE VAI RECEBER A STRING
	tam = strlen(x);
	
	do
	{
		if(x[tam] >= '0' && x[tam] <= '9') // VERIFICA SE O CHAR � UM ALGARISMO
		{		
			carac = x[tam]; // SE FOR ALGARISMO, SER� CONVERTIDO EM INT
			//c = atol(carac); // ERRO: INVALID CONVERSION FROM 'CHAR' TO 'CONST CHAR*'
			//c = atof(carac); // ERRO: INVALID CONVERSION FROM 'CHAR' TO 'CONST CHAR*'
			//c = atoi(carac); // ERRO: INVALID CONVERSION FROM 'CHAR' TO 'CONST CHAR*'
			c = int(carac) - '0'; //CONVERS�O - CAST; CALCULO DA TABELA ASCII
			s += c * m; // MULTIPLICA��O ATRIBUIDO NA VARIAVEL S
			if(m < 9) // MULTIPLICA��O DO 2 AO 9
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
	if(s == 0) // VERIFICA SE POSSUI DIGITOS INV�LIDOS 
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
 	//DECLARA��O DE VARIAVEL
 	char txt[30];
 	int d, c=0;
 	
	printf("Desenvolvido por:\n");
	printf("Matheus Oliveira Nonato da Silva\nPedro Lucas Ribeiro Neto\nMarcelo Camargo da Silva\n\n");
 	
 	do
 	{
 		printf("\nDigite 'FIM' para encerrar o programa.");
		printf("\nEntre com uma string com valores decimais (m�ximo 30 caracteres): ");
		scanf("%s", &txt);
		calcula_dv(strupr(txt)); // SE O USU�RIO ENTRAR COM UM VALOR 'FIM' IR� PASSAR PELA FUN��O 'strupr' ONDE A STRING IR� FICAR MAIUSCULA, CASO CONTR�RIO, VAI PASSAR PELA FUN��O 'calcula_dv'

		if(strcmp(txt, "FIM") == 0) // SE A ENTRADA 'TXT' FOR FIM IR� ACRESCENTAR 1 NA VARI�VEL 'C'
		{
			c++;
		}
		else
		{
			d = calcula_dv(txt); // LEITURA DA STRING INFORMADA PELO USUARIO, PASSANDO PELA FUN��O
			if(d >= 0)
			{
				printf("DV calculado com sucesso: %s-%d\n", txt, d); // RETORNO DA FUN��O COM SUCESSO 
			}
			else
			{
				printf("Aten��o!! Valor n�o informado!\n"); // SE O USU�RIO N�O INFORMAR NENHUM VALOR
			}
		}	
				
	 }while(c != 1); // ENQUANTO A VARI�VEL 'C' FOR DIFERENTE DE 1, IR� REPETIR.
}




