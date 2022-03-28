#include <stdio.h>
#include <locale>

int main()
{
	int valores[5], i;
	char teste[6] = {"Teste"};
	
	/* 1- opção int dia[7] = {1,2,3,4,5,6,7}; => Maneiras de atribuir valores de um vetor
	   2- opção int cor_menu[4];
	   	  cor_menu[0] = BLUE;
	   	  cor_menu[1] = YELOW;
	      cor_menu[2] = GREEN;
	      cor_menu[3] = GRAY;
	*/
	
	printf("%c",teste);
	setlocale(LC_ALL,"Portuguese");
	for(i=0; i < 5; i++)
	{
		printf("Entre com o %dº numero: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	printf("\n");
	
	for(i=0; i < 5; i++)
	{
		printf("%d ", valores[i]);
	}
}
