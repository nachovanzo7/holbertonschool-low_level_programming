#include "main.h"

/**
*print_alphabet - Devuelva el abecedario en minusculas
*Return: No devuelve nada
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
