#include <stdio.h>
#include <locale.h>


//int multiplica(int x, int y);
int multiplica(int x, int y)
{
	return x * y;
}

int main()
{
	int n1,n2, result;
	
	setlocale(LC_ALL, "Portuguese");
	
	while(1)
	{
		printf("\nEntre com o 1º valor");
		printf(" ou digite um valor negativo para sair: ");
		scanf("%d", &n1);
		
		if(n1 < 0)
		{
			break;
		}
		
		printf("Entre com o 2º valor: ");
		scanf("%d", &n2);
		
		result = multiplica(n1,n2);
		printf("%d X %d = %d", n1,n2,result);
	}
	
	
		
}


