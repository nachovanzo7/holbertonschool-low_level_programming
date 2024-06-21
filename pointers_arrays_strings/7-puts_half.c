#include "main.h"

/**
*puts_half - Imprime la mitad del string
*Return: no devuelve nada
*@str: el string
*/

void puts_half(char *str)
{
	int x = 0;
	int n;

	while (str[x] != '\0')
		x++;

	if (x % 2 == 1)
	{
		n = (x - 1) / 2;
		n += 1;
	}

	else
		n = x / 2;

	for (; n < x; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');

}
