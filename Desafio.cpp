#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade[5], maior, menor, soma, i;

	for(i=0; i < 5; i++)
	{
		printf("Entre com a %d� idade => ", i+1);
		scanf("%d", &idade[i]);
	}
	
	// soma das idades
	soma = 0;
	for(i=0; i < 5; i++)
	{
		soma = soma + idade[i];
	}
	
	printf("A soma de todas as idades � => %d", soma);
	
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
	printf("\nA maior idade � %d", maior);
	printf("\nA menor idade � %d", menor);
	
	// diferen�a entre o maior e a menor idade
	printf("\nA diferen�a entre %d e %d � => %d", maior, menor, maior-menor);
	
	// m�dia das idades
	printf("\nA m�dia das idades foi => %.2f", (float) soma/5);
	

	
}
