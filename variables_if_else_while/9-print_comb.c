#include <stdio.h>

/**
*main - Todas las combinaciones de digitos solitarios
*Return: Retorna siempre 0
*/

int main(void)
{
	char x;
	for (x = 0; x < 10; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar ('\n');
	return (0);
}
