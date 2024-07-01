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

	if (width <= 0 || height <= 0) /* Si no se recibe nada */
		return (NULL);

	p = malloc(sizeof(int *) * height); /* Creo espacio de memoria para las filas */

	if (p == NULL) /* No hay espacio de memoria suficiente */
	{
		free(p);
		return (NULL);
	}

	for (x = 0; x < height; x++) /* Recorro cada una de las filas */
	{
		p[x] = malloc(sizeof(int) * width); /* Creo espacio de memoria para las columnas por fila */

		if (p[x] == NULL) /* No hay espacio de memoria suficiente para las columnas */
		{
			for (; x >= 0; x--) /*Limpio uno a uno los espacios creados */
				free(p[x]);

			free(p); /* Limpio todo el espacio */
			return (NULL);
		}
	}

	for (x = 0; x < height; x++) /*Por fila y columna le adjudico un valor a el espacio */
	{
		for (y = 0; y < width; y++)
			p[x][y] = 0;
	}

	return (p);
}
