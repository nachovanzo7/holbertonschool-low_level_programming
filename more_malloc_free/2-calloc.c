#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int x;
	
	if (nmemb == 0 || size == 0)

	p = (int *)malloc(nmemb * size);

	if (p == null)
		return (NULL);

	for (x = 0; x < nmemb; x++)
	{
		p[x] = 0;
	}

	return (p);
	exit(0);


}
