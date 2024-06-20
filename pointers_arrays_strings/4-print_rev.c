#include "main.h"

/**
*print_rev - Devuelve una string en reversa
*Return: no retorna nada
*@s: el string devuelto
*/

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
		x++; /* obtener la ultima posicion del string */

	for (y = (x - 1); y >= 0; y--)
	{
		_putchar(s[y]);
	}

	_putchar('\n');
}


