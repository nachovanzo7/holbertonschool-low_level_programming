#include "main.h"

/**
*print_triangle - Imprime un triangulo
*Return: no retorna nada
*@size: es el tamanio del triangulo
*/

void print_triangle(int size)
{
	int x, y, espacio;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (espacio = size - x; espacio >= 1; espacio--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
