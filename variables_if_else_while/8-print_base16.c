#include <stdio.h>

/**
*main - Retorna todos los numeros de base 16
*Return: devuelve siempre valor 0
*/

int main(void)
{
	char x;

	for (x = 0; x <= 10; x++)
	{
		putchar(x);
	}

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
