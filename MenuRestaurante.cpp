#include <stdio.h>
#include <locale>

int main()
{
	int opc;
	
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
		printf("********** M E N U ********** \n");
		printf("	1 - FEIJOADA			  \n");
		printf("	2 - STROGONOFF			  \n");
		printf("	3 - RISOTO DE CAMAR�O	  \n");
		printf("	4 - FIL� DE MERLUSA 	  \n");
		printf("	0 - SAIR DO MENU	 	  \n\n");
		
		printf("	ESCOLHA A OP��O DO MENU: ");
		scanf("%d", &opc);
			
	} while(opc != 0);
	
}
