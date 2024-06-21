#include "main.h"
#include <stdio.h>

/**
*print_array - Imprime un array
*Return: no retorna nada
*@a: es el array
*@n: es la cantidad de elementos en array
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
