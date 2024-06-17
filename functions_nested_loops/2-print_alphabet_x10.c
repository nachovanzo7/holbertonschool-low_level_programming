#include "main.h"

/**
*print_alphabet_x10 - Va a imprimir el abecedario diez veces
*Return: no devuelve nada
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 11; i++)
	{
		char letra;

		for (letra = 'a'; letra <= 'z'; letra++)
			_putchar(letra);

		_putchar('\n');
	}
}
