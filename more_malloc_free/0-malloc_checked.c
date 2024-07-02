#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Asignar memoria usando malloc
 *Return: no retorna nada
 *@b: espacio de memoria a alojar
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(p) * b);

	if (p == NULL)
		exit(98);

	return (p);
	exit(0);
}
