#include "main.h"

/**
*print_line - Dibuja una linea en la terminal
*Return: no devuelve nada
*@n: cantidad de veces que se repite la linea
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');

	else
	{
		for (x = 0; x < n; x++)
			_putchar('_');

		_putchar('\n');
	}
}
