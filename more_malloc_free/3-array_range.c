#include "main.h"
#include <stdlib.h>

/**
 *array_range - Crea espacio de memoria en base a un rango
 *Return: el espacio de memoria con sus valores
 *@min: minimo de elementos
 *@max: maximo de elementos
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(((max - min + 1)) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1) ; i++)
	{
		min++;
		p[i] = min;
	}

	return (p);
}
