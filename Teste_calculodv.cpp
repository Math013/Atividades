#include <stdio.h>
#include <string.h>


int main()
{
	int valor1, valor2, valor3, valor4;	// os numeros
	char d1, d2, d3; // os delimitadores
	int n; 
	int soma, i;  // para calculo dos DV 123.456.789-09 OK

	printf("Entre com o CPF no formato 012.345.678-90 e Tecle ENTER ao terminar\n");
	printf("\nCPF: ");

	n = scanf( "%3d%c%3d%c%3d%c%2d", &valor1, &d1, &valor2, &d2, &valor3, &d3, &valor4 );

	// o que leu?
	printf("\nscanf() leu %d itens\n", n);

	// os valores
	printf("scanf()     valor1 = %03d\n", valor1);
	printf("scanf()     valor2 = %03d\n", valor2);
	printf("scanf()     valor3 = %03d\n", valor3);
	printf("scanf()     valor4 = %02d\n", valor4);

	// os delimitadores
	printf("scanf()     delimitador 1 = [%c]\n", d1);
	printf("scanf()     delimitador 2 = [%c]\n", d2);
	printf("scanf()     delimitador 3 = [%c]\n", d3);

	// mostra os valores afinal
	printf("\nCPF lido %03d.%03d.%03d-%02d\n", valor1, valor2, valor3, valor4);

	// aqui vão os digitos 1 a 1 para calcular os DV
	int digito[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	digito[0] =  valor1 / 100;
	digito[1] = (valor1 % 100) / 10;
	digito[2] =  valor1 % 10;

	digito[3] =  valor2 / 100;
	digito[4] = (valor2 % 100) / 10;
	digito[5] =  valor2 % 10;

	digito[6] =  valor3 / 100;
	digito[7] = (valor3 % 100) / 10;
	digito[8] =  valor3 % 10;

	digito[ 9] = valor4 / 10;
	digito[10] = valor4 % 10;


	printf("Digito a Digito: ");
	for (i = 0; i < 11; i = i + 1)
	{
		printf("%d ", digito[i]);
	}
	printf("\n");

	/////////////////////////////////////////////////////////// DV 1

	// o primeiro digito verificador, modulo 11 dos 9
	soma = 0;
	for (i = 0; i < 9; i = i + 1)
		soma = soma + digito[i] * (10-i); // 10..2

	// essa e a conta que da nome ao processo
	soma = soma % 11;
	if (soma > 1)
		digito[9] = 11 - soma;
	else
		digito[9] = 0;

	/////////////////////////////////////////////////////////// DV 2

	// o segundo DV, modulo 11 dos 10
	soma = 0;
	for (i = 0; i < 10; i = i + 1)
		soma = soma + digito[i] * (11 - i); // 11..2

	// essa e a conta que da nome ao processo
	soma = soma % 11;
	if (soma > 1)
		digito[10] = 11 - soma;
	else
		digito[10] = 0;


	printf("\nDV calculados: %d %d\n", digito[9], digito[10]);

	// compara os digitos
	int dv1ok = digito[9] == (valor4 / 10);
	int dv2ok = digito[10] == (valor4 % 10);

	if (dv1ok && dv2ok)
	{
		printf("CPF valido\n");
	}
	else
	{
		if (!dv1ok) printf("DV1 'devia ser %d. Lido %d\n", digito[9], (valor4 / 10));
		if (!dv2ok) printf("DV2 'devia ser %d. Lido %d\n", digito[10], (valor4 % 10));
		printf("CPF INVALIDO\n");
	};	// if
}	// main
