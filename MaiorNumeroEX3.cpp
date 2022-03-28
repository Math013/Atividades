#include <stdio.h>

int main()
{
	int maior, n;
	
	printf("********** M A I O R  N U M E R O **********");
	
	maior = 0;
	
	do 
	{
		printf("\nEscreva um numero, '0' para encerrar: ");
		scanf("%d", &n);
			
		if(n > maior)
		{
			maior = n;
		}
				
	}while(n != 0);
	printf("O maior numero digitado foi: %d", maior);

	
	
}
