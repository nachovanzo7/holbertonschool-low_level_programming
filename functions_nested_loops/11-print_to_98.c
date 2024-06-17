#include "main.h"
#include <stdio.h>

/**
*print_to_98 - Devuelve todos los numeros naturales desde n hasta 98
*Return: no devuelve nada
*@n: es el valor donde se comenzara a contar los numeros naturales
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
