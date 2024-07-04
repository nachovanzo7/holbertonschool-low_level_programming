#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Asigna espacio de memoria para cantidad de elementos determinado
 *Return: retorna el puntero donde se aloja el espacio de memoria
 *@nmemb: cantidad de elementos para asignar
 *@size: peso de cada elemento en bytes
 */

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

	for (x = 0; x < ((nmemb * size) / 4); x++)
	{
		pp[x] = 0;
	}

	return (p);
	exit(0);


}
