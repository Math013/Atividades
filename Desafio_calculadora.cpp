#include <stdio.h>
#include <locale>

int mult(int x, int y)
{
	return x * y;
}
int soma(int x, int y)
{
	return x + y;
}
int subt(int x, int y)
{
	return x - y;
}
float div(int x, int y)
{	
	return x / y;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha, n1,n2;
	do
	{
		printf("\nEntre com 1� valor: ");
		scanf("%d", &n1);
		
		printf("Entre com 2� valor: ");
		scanf("%d", &n2);
		
		
				
		printf("* * * * * MENU * * * * *");
		printf("\n1 - Soma");
		printf("\n2 - Subtra��o");
		printf("\n3 - Multiplica��o");
		printf("\n4 - Divis�o");
		printf("\n0 - Sair");
		printf("\nEscolha uma opera��o: ");
		scanf("%d", &escolha);
		
		if(escolha > 4)
		{
			break;
		}
				
		switch(escolha)
		{
			case 1: 
				soma(n1,n2);
			case 2:
				subt(n1,n2);
			case 3:
				mult(n1,n2);
			case 4:
				div(n1,n2);
		}
		

		if(escolha == 1)
		{
			printf("%d + %d = %d", n1,n2, n1+n2);
		}
		if(escolha == 2)
		{
			printf("%d - %d = %d", n1,n2, n1-n2);
		}
		if(escolha == 3)
		{
			printf("%d * %d = %d", n1,n2, n1*n2);
		}
		if(escolha == 4)
		{
			printf("%d / %d = %.2f", n1,n2, (float) n1/n2);
		}
		
		break;
		
	}while(escolha != 0);
}
