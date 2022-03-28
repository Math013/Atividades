#include <string.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int verif_vogal(char v[31])
{
	int tam, n_vo;
	char vogal;
	
	tam = strlen(v);
	do{
	
		if(v[tam] == 'A' && 'E' && 'I' && 'O' && 'U')
		{
			vogal = v[tam];
			n_vo++;
		}
		return 0;
			
	}while(tam >=0);
	
	return vogal;
}

int main()
{
	char vog[31], cons[31], nomes[31], nome;
	int nVo=0, nCo=0, letras=0, nNo=0,i;
	setlocale(LC_ALL,"Portuguese");
	printf("Escreva seu nome: ");
	scanf("%s", &nome);
	verif_vogal(strupr(nomes));
	
	
	printf("As vogais: %s", nomes);
	printf("\nO tamanho da String é: %d", strlen(nomes));
	
}
