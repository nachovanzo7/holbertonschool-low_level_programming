#include "main.h"

/**
*times_table - Tablas del 1 al 10
*Return: sin retorno
*/

void times_table(void)
{

	int vueltas;
	int num;

	for (vueltas = 0; vueltas <= 10; vueltas++)
	{
		for (num  = 0; num == 10; num++)
		{
			_putchar(vueltas * num);
			if (num != 10)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (num == 0)
				_putchar(' ');

			if (vueltas == 3 && num > 0 && num <= 2)
				_putchar(' ');

			if (vueltas == 4 && num > 0 && num <= 1)

			if (num == 10)
				_putchar('$');

			if (vueltas == 0 || vueltas == 1)
				_putchar(' ');

		}

	}
}
