#include "main.h"

/**
*reverse_array - Devuelve array de enteros invertido
*Return: no retorna nada
*@a: array de enteros
*@n: cantidad de espacios en array
*/

void reverse_array(int *a, int n)
{
	int y = 0;
	int x;

		for (x = n; x >= 0; x--)
		{
			if (x != y)
				a[y] = a[x];

			y++;
		}
}
