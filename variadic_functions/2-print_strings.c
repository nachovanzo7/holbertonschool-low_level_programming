#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_strings - Imprimir un string 
 *Return: no retorna nada
 *@separator: separador de strings
 *@n: cantidad de string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x;
	const char *s = separator;
	char *str;

	va_list lista;

	va_start(lista, n);

	for (x = 0; x < (int)n; x++)
	{
		str = va_arg(lista, char *);

		printf("%s", str);

			if (s != NULL)
			{
				if (x < ((int)n - 1))
					printf("%s", s);
			}

			if (str == NULL)
				printf("%s", "(nil)");
			else
			{
				printf("%s", str);
			}

	}

	printf("%c", '\n'); 
}
