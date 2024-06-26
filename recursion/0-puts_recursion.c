#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - Imprimir un string 
 *Return: no retorna nada
 *@s: el string para imprimir
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{	
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;

	_puts_recursion(s);
}
