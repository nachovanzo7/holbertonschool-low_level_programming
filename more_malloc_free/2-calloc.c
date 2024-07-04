#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p; /* Lo devuelto por la funcion */
	int *pp; /* Puntero del puntero para guardar valores */
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (int *)malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	pp = p;

	for (x = 0; x < (nmemb * size);x++)
	{
		pp[x] = 0;
	}

	return (p);
	exit(0);


}
