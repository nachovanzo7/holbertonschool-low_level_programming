#include "main.h"

/**
*more_numbers - Devuelve lista de numeros
*Return: no devuelve nada
*/

void more_numbers(void)
{
	int x;
	int y;
	int decena;
	int unidad;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			unidad = y % 10;
			decena = y / 10;

			if (y > 9)
			{
				_putchar(decena + '0');
			}

			_putchar(unidad + '0');
		}

		_putchar('\n');
	}
}
