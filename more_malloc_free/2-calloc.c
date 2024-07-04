#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int x;
	int *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (int *)malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	a = (int *)(p);

	for (x = 0; x < (nmemb * size);x++)
	{
		a[x] = '\0';
	}

	return (p);
	exit(0);


}
