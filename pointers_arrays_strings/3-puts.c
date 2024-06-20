#include "main.h"
#include <stdio.h>

/**
*_puts - Devolver un string
*Return: no devuelve nada
*@str: valor del main
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
