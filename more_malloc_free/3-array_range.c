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
	
	if (min > max)
		return (NULL);

	p = malloc(((max + 1)) * sizeof(int));

	if (p == NULL)
		return (NULL);

	return (p);
}
