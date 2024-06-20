#include "main.h"

/**
*puts2 - String linea por medio
*Return: no devuelve nada
*@str: string devuelto
*/

void puts2(char *str)
{
	int i;
	int x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i++)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
