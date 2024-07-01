#include "main.h"
#include <stdlib.h>

/**
 * create_array - Crea un array de chars
 * Return: retorna NULL si el tama√o es 0 sino retorna el array
 * @size: tama√o del array
 * @c: caracter del array
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(c));

	if (p == NULL)
		return (NULL);

	return (p);


}
