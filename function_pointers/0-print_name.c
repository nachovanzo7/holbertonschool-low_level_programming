#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - Imprimir un nombre
 *Return: no retorna nada
 *@name: nombre a imprimir
 *@f: puntero a funcion
 */

void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	p = f;

	(*p)(name);

	exit (EXIT_SUCCESS);
}
