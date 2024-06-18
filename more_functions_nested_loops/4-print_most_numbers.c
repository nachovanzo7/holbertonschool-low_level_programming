#include "main.h"

/**
*print_most_numbers - Retornar numero del 0 al 9 sin incluir al 2 y 4
*Return: no retorna nada
*/

void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}

	_putchar('\n');
}
