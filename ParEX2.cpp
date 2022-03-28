#include <stdio.h>
int main()
{
	int n1,n2;
	
	printf("********** P A R **********");
	
	printf("\nInforme o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nInforme o segundo numero: ");
	scanf("%d", &n2);
	
	
	for(n1; n1 <= n2; n1++)
	{
		if(n1 % 2 == 0)
		{
			printf("\n%d",n1);			
		}
		
	}
	
	
}
