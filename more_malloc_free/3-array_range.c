#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(((max + 1)) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1) ; min++)
	{
		p[min] = min;
		min++;
	}

	return (p);
}
