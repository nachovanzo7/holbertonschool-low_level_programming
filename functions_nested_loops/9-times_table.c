#include "main.h"

/**
*times_table - Tablas del 1 al 10
*Return: sin retorno
*/

void times_table(void)
{

	int vueltas;
	int num;
	int res;

	for (vueltas = 0; vueltas <= 9; vueltas++)
	{
		_putchar('0');

		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			res = vueltas * num;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');

			_putchar((res % 10) + '0');

		}
		_putchar('\n');
	}

}
