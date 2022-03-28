#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	int funcionario[5][3], lin, col;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(lin=0;lin<5;lin++)
	{
		for(col=0;col<3;col++)
		{
			switch(col)
			{
				case 0:
					printf("Entre com o código do funcionário: ");
					break;
				case 1:
					printf("Entre com a qtde de dias normal de trabalho: ");
					break;
				case 2:
					printf("Entre com a qtde de faltas não justificadas: ");
					break;
			}
			scanf("%d", &funcionario[lin][col]);
		}
		printf("\n");
	}
	
	for(lin=0; lin < 5;lin++)
	{
		printf("Funcionário %d dos %d dias trabalhou %d dias.\n", funcionario[lin][0], funcionario[lin][1],
																  funcionario[lin][1] - funcionario[lin][2]);
	}
	
	
	
}
