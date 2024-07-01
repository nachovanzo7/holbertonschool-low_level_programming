#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Libera un espacio de grilla bidimensional
 *Return: no retorna nada
 *@grid: grilla bidimensional
 *@height: filas
 */

void free_grid(int **grid, int height)
{
	int x; 
	int **p = grid;

	for (x = 0; x < height; x++) /* Recorro cada una de las filas */
	{

			for(x = 0; p[x] != NULL; x++) /*Limpio uno a uno los espacios creados */
				free(p[x]);

			free(p); /* Limpio todo el espacio */
	}
}
