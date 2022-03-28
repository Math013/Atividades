#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	char num[20];
	
		printf("Digite um número, 0(Zero) se for parar: ");
		fgets(num, 20, stdin);
		if(strlen(num) == '\0')
		{
			printf("Escreva um valor inteiro!!!");	
		}
	
	
	/*do{
		
		printf("Informe um valor inteiro positivo: ");
		fgets(numero, 99, stdin);
		numero[strlen(numero)-1] = '\0';
	
		n = atoi(numero);


		
	}while(n != 0);
	printf("Numeros digitados:\n %d", n);
	*/
}
