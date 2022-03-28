#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade[5], maior, menor, soma, i;

	for(i=0; i < 5; i++)
	{
		printf("Entre com a %dª idade => ", i+1);
		scanf("%d", &idade[i]);
	}
	
	// soma das idades
	soma = 0;
	for(i=0; i < 5; i++)
	{
		soma = soma + idade[i];
	}
	
	printf("A soma de todas as idades é => %d", soma);
	
	// maior e menor idade
	maior = 0;
	menor = 999999;
	
	for(i=0; i < 5; i++)
	{
		if(maior < idade[i])
		{
			maior = idade[i];
		}
		
		if(menor > idade[i])
		{
			menor = idade[i];
		}
	}
	printf("\nA maior idade é %d", maior);
	printf("\nA menor idade é %d", menor);
	
	// diferença entre o maior e a menor idade
	printf("\nA diferença entre %d e %d é => %d", maior, menor, maior-menor);
	
	// média das idades
	printf("\nA média das idades foi => %.2f", (float) soma/5);
	

	
}
