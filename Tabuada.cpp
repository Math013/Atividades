#include <stdio.h>

int main()
{
	int valor, num, n;
	
	printf("Digite o numero da tabuada: ");
	scanf("%d",&valor);
	
	num = 1;
			
	while(num <= 10)
	{
		
		printf("%d X %d = %d \r\n", valor,num,valor*num);
		num++;
	}
	
	printf("\nTESTE 'DO WHILE'\n");
	
	num = 1;
	do
	{
		printf("%d X %d = %d \n", valor, num, valor*num);
		num++;
	}
	while(num <= 10); 
	
	printf("\nTESTE DE 'FOR'\n");
	
	n = 0;
	for(n; n++ <= 9; n * valor)
	{
		printf("%d X %d = %d \n", valor, n, valor*n);
	}
	
	printf("%d X %d = %d \r\n", valor,valor*2);
	printf("%d X %d = %d \r\n", valor,valor*3);
	printf("%d X %d = %d \r\n", valor,valor*4);
	printf("%d X %d = %d \r\n", valor,valor*5);
	printf("%d X %d = %d \r\n", valor,valor*6);
	printf("%d X %d = %d \r\n", valor,valor*7);
	printf("%d X %d = %d \r\n", valor,valor*8);
	printf("%d X %d = %d \r\n", valor,valor*9);
	printf("%d X %d = %d \r\n", valor,valor*10);
	return 0;



	
}
