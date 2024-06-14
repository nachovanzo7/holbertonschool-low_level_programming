#include <stdio.h>
#include <ctype.h>
/**
*main - Todas las combinaciones de digitos solitarios
*Return: Retorna siempre 0
*/

int main(void)
{
	int x;
	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');

		if (x >= 0 && x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
