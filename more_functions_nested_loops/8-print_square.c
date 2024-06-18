#include "main.h"

/**
*print_square - Imprime el #
*Return: no retorna nada
*@size: la cantidad de veces que devuelve
*/

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
