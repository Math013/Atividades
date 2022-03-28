#include <stdio.h>

int main()
{
	int t1,t2, aux;
	printf("********** T A B U A D A **********");
	
	printf("\nInforme o primeiro valor: ");
	scanf("%d", &t1);
	
	printf("\nInforme o segundo valor: ");
	scanf("%d", &t2);
	
	while(t1 > 0 && t2 > 0 && t1 >= t2)
	{
		printf("\nO primeiro valor deve ser inferior ao segundo valor informado!!\n");
				
		printf("\nInforme o primeiro valor: ");
		scanf("%d", &t1);
	
		printf("\nInforme o segundo valor: ");
		scanf("%d", &t2);	
		
	}
	
	while(t1<=t2)
	{
		aux = 1;
		while(aux <= 10)
		{
			printf("\n%d X %d = %d", t1, aux, t1*aux);
			aux++;
		}
	t1++;
	}
}
