#include <stdio.h>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n = 1;
	
	printf("********** M U L T I P L O **********");
	
	for(n; n <= 1000; n++)
	{
		if(n % 10 == 0)
		{
			printf("\n%d é multplo de 10", n);
		}
		
	}
}
