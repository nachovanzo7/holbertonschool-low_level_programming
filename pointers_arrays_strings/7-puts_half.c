#include "main.h"

/**
*puts_half - Imprime la mitad del string
*Return: no devuelve nada
*@str: el string
*/

void puts_half(char *str)
{
	int x = 0;
	int y;

	while (str[x] != '\0')
		x++;

	if (x % 2 == 1)
		y = ((x - 1) / 2);

	else
		y = x / 2;

	for (; y < x; y++)
	{
		_putchar(str[y]);
	}

}
