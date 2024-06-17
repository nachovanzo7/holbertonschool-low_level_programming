#include "main.h"

/**
*print_last_digit - Devuelve el ultimo digito de un numero
*Return: ultimo digito de un numero (int)
*@x: numero ingresado
*/

int print_last_digit(int x)
{
	int last = x % 10;

	if (last < 0)
		last = (last * -1);

	_putchar(last + '0');

	return (last);
}
