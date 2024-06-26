#include "main.h"

/**
 *_print_rev_recursion - Imprime el string en reversa
 *Return: no retorna nada
 *@s: string para imprimir en reversa
 */

void _print_rev_recursion(char *s)
{

	if (*s) /*recorro el string hasta el final*/
	{
		_print_rev_recursion(s + 1); /*voy hasta el final del string de uno en uno*/
		_putchar(*s); /*Se va a ejecutar al llegar al ultimo caracter y 
				comienza a imprimir del final al principio*/
	}

	return;
}
