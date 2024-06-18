#include "main.h"

/**
*print_diagonal - Imprime una diagonal en la terminal
*Return: no devuelve nada
*@n: es la cantidad de veces que se imprime la diagonal
*/

void print_diagonal(int n)
{
	int x;
	int y;

		if (n <= 0)
			_putchar('\n');

		else
		{
			for (x = 0; x < n; x++)
			{
				if (x > 0)
				{
					for (y = 0; y <= x; y++)
						_putchar(' ');
				}

				_putchar('\\');
                        	_putchar('\n');
			}
		}

}
