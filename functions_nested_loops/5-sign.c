#include "main.h"

/**
*print_sign - Imprime si es un simbolo o un numero
*Return: devuelve 1 o 0
*@n: es un entero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
