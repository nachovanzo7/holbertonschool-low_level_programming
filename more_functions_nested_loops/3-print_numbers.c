#include "main.h"

/**
*print_numbers - Devuelve los numeros entre 0 a 9
*Return: no retorna nada
*/

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);

	_putchar('\n');
}
