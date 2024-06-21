#include "main.h"

/**
*puts_half - Imprime la mitad del string
*Return: no devuelve nada
*@str: el string
*/

void puts_half(char *str)
{
	int x = 0;

	while (*str != '\0')
		x++;

	x = (x / 2);

	for (*str = str[x]; *str <= '\0'; str++)
	{
		_putchar(*str);
	}

}
