#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - Imprimir un string 
 *Return: no retorna nada
 *@s: el string para imprimir
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{	
		_putchar('\n');
		return;
	}

	_putchar(s[x]);
	x++;
}
