#include <stdio.h>

int main()
{
	int valor;
	printf("Digite um numero: ");
	scanf("%d", &valor);
	printf("\no numero é %d", valor);
	printf("\no endereco e %x",&valor);
	return 0;
}
