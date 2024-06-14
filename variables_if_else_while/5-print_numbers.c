#include <stdio.h>
#include <ctype.h>
/**
*main - Los numeros entre 0 y 9
*Return: siempre retorna 0
*/

int main(void)
{
	int num = 0;
	while ((num % 10) == 0 || num == 0)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}
