#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct 
{
     char nome[50];
     char endereco[60];
     char cidade[50];
} registro;



typedef struct
{
     char nome[50];
     char endereco[60];
     char cidade(50);
     char uf[2];
     float salario;
} Registro


int main()
{
	char nome[7];
nome[0] = 'M';
nome[1] = 'A';
nome[2] = 'R';
nome[3] = 'C';
nome[4] = 'E';
nome[5] = 'L';
nome[6] = 'O';
nome[7] = '\0';


//char nome_[15] = 'MARCELO';

//har nome3__[15] = {"M","A","R","C","E","L","O"};
}




/*
#include <stdio.h>

void func1();

int contador = 200;  
int main()
{
     contador = 100;
     func1();
     printf("valor de contador = %d", contador);  
}

void func1()
{
     int contador = 0;
     contador = contador +1;
     contador--;
}

*/






/*int main()
{
	char valor[15];
	int qtd_dias;
	float vl_dia;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Entre com a qtde dias trabalhado: ");
	fgets(valor, 15, stdin);
	
	qtd_dias = atoi(valor);
	
	//qtd_dias = atof(valor);
	
	printf("Entre com o valor do dia trabalho: ");
	fgets(valor, 15, stdin);
	vl_dia = atof(valor);
	
	//vl_dia = atoi(valor);
	
	printf("Salário bruto: %.2f", qtd_dias*vl_dia);
	
	//printf ("Salário bruto: %d", qtd_dias*vl_dia);
}*/
