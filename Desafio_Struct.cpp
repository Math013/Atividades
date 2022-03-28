#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define TOTREG 3 

typedef struct
{
	char nome[61];
	float peso;
	float altura;
	int idade;
	char tpsangue[4];
} Pessoa;

Pessoa pes[TOTREG];

int main()
{
	int idx, idx_novo, idx_velho, idx_pmaior, idx_pmenor, imaior, imenor;
	float pmaior, pmenor;
	setlocale(LC_ALL,"Portuguese");
	
	/// preenche valores da estrutura
	
	for(idx = 0; idx < TOTREG; idx++)
	{
		printf("Entre com o nome do %dº indivíduo: ", idx+1);
		fgets(pes[idx].nome, 51, stdin);
		pes[idx].nome[strlen(pes[idx].nome)-1] = '\0';
		fflush(stdin);
		
		printf("Entre com o peso: ");
		scanf("%f", &pes[idx].peso);
		fflush(stdin);
		
		printf("Entre com a altura: ");
		scanf("%f", &pes[idx].altura);
		fflush(stdin);
		
		printf("Entre com a idade: ");
		scanf("%d", &pes[idx].idade);
		fflush(stdin);
		
		printf("Entre com seu tipo sanguíneo: ");
		fgets(pes[idx].tpsangue, 51, stdin);
		pes[idx].tpsangue[strlen(pes[idx].tpsangue)-1] = '\0';
		fflush(stdin);
	}
	
	// identifica o indivíduo mais novo e o mais velho
	
	idx_novo = 0;
	idx_velho = 0;
	imaior = 0;
	imenor = 150;
	
	for(idx = 0; idx < TOTREG; idx++)
	{
		if(pes[idx].idade > imaior)
		{
			imaior = pes[idx].idade;
			idx_velho = idx;
		}
		
		if(pes[idx].idade < imenor)
		{
			imenor = pes[idx].idade;
			idx_novo = idx;
		}
		
	}
	
	// identificar o mais alto e o mais baixo
	
	pmaior = 0;
	pmenor = 800;
	idx_pmaior = 0;
	idx_menor = 0;
	
	for(idx = 0; idx < TOTREG; idx++)
	{
		if(pes[idx].peso > pmaior)
		{
			pmaior = pes[idx].peso;
			idx_pmaior = idx;
		}
		
		if(pes[idx].peso < pmenor)
		{
			pmenor = pes[idx].peso;
			idx_pmenor = idx;
		}
	}
	
	
	
	
	
	
	
	
	
	// imprimir resumo
	
	printf("* * * * * * * RESUMO * * * * * * * \n");
	printf("%s é o mais novo com %d anos.\n", pes[idx_novo].nome, pes[idx_novo].idade);
	printf("%s é o mais velho com %d anos.\n", pes[idx_velho].nome, pes[idx_novo].idade);
	printf("%s é o mais pesado com %f KG.\n", pes[idx_pmaior].nome, pes{idx_pmaior}.peso);
	printf("%s é o mais leve com %")
}
