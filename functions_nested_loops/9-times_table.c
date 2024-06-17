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

			if (vueltas == 0 || vueltas == 1)
                        {
                                _putchar(' ');
                        }
		}

	}
}

