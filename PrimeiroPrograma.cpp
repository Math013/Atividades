#include <stdio.h>
#include <locale.h> //Usar acentos

int main()
{
	int x = 0;
	
	
	setlocale(LC_ALL, "Portuguese"); //chamar a fun��o para utilizar acentos 
	printf("Teste de �");
	
	x = x + 1;
	printf("\n%d", x);
	
	x--;
	printf("\n%d", x);	
	
	
	printf("\n%d", sizeof(float));
	printf("\n%d", sizeof(int));
	
	
}
