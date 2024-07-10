#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - Imprime una lista de enteros
 *Return: no retorna nada
 *@separator: separador entre numero y numero
 *@n: numero
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	const char *s = separator;

	va_list lista;

	va_start(lista, n);
	
		for (i = 0; i < (int)n; i++)
		{
			printf("%i", va_arg(lista, int));

			if (s != NULL)
			{
				if (i < ((int)n - 1))
					printf("%s", s);
			}
		}

	printf("%c" ,'\n');
}
