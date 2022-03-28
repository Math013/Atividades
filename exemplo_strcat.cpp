#include <stdio.h>
#include <string.h>

int main()
{
	char texto[200], novotexto[200] = "Meu livro ";
	printf("Digite o texto: ");
	fgets(texto, 200, stdin);
	strcat(novotexto,texto);
	printf("%s", novotexto);
}
