#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - Retorna puntero a array bidimensional
 *Return: un array bidimensional
 *@width: ancho del array
 *@height: largo del array
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (x = 0; x <= height; x++)
	{
		p[x] = malloc(width * sizeof(int));

		for (y = 0; y <= width; y++)
		{
			p[y][x] = 0;
		}
	}

	return (p);
}
