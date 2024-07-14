#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
*convertir - Funcion dedicado al tipo de dato
*@tipo: tipo de dato
*@p: puntero a funcion
*/

typedef struct convertir
{
	char *tipo;
	void (*p)(va_list);
} convertir_tipo;

#endif
