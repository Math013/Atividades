#include <stdio.h>
#include <string.h>

int main()
{
	char texto[200], novotexto[200],console[200];
	printf("Digite o texto: ");
	fgets(texto, 200, stdin);
	strcpy(novotexto, texto);
	strcpy(console, "Adeus");
	printf("%s %s", console, novotexto);
	
}
