#include "main.h"

/**
*print_to_98 - Devuelve todos los numeros naturales desde n hasta 98
*Return: no devuelve nada
*@n: es el valor donde se comenzara a contar los numeros naturales
*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		int bucle;


		for (bucle = n; bucle <= 98; bucle++)
		{
			_putchar(bucle);

			if (bucle != 98)
				_putchar(',');
		}
	}

	else
	{
		int bucle;

		for (bucle = n; bucle >= 98; bucle--)
		{
			_putchar(bucle);

			if (bucle != 98)
				_putchar(',');
		}
	}
}
