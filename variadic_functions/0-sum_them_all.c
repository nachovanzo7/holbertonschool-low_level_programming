#include "variadic_functions.h"

/**
 *sum_them_all - Suma todos los argumentos
 *Return: retorna la suma de todos los numeros
 *@n: argumento de suma
 */

int sum_them_all(const unsigned int n, ...)
{
	int suma = 0, i;

	va_list lista;

	va_start(lista, n);

	for (i = 0; i < (int)n; i++)
		suma += va_arg(lista, int);

	va_end(lista);

	return (suma);
}


