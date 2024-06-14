#include <stdio.h>
#include <ctype.h>
/**
*main - Los numeros entre 0 y 9
*Return: siempre retorna 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}
