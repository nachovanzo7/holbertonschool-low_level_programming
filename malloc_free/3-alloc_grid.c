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

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		p[x] = malloc(sizeof(int) * width);

		if (p[x] == NULL)
		{
			for (; x >= 0; x--)
				free(p[x]);

			free(p);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			p[x][y] = 0;
	}

	return (p);
}
