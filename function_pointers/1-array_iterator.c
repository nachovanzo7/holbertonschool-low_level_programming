#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - Ejecutar funcion por parametro en cada elemento array
 *Return: no retorna nada
 *@array: array enviado por parametro
 *@size: longitud del array
 *@action: puntero de funcion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;
	void (*p)(int);

	p = action;

	for (x = 0; x <= (int)size; x++)
	{
		(*p)(array[x]);
	}

	exit(EXIT_SUCCESS);
}
