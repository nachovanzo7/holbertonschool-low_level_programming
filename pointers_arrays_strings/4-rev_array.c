#include "main.h"

/**
*reverse_array - Devuelve array de enteros invertido
*Return: no retorna nada
*@a: array de enteros
*@n: cantidad de espacios en array
*/

void reverse_array(int *a, int n)
{
	int y;
	int x; /*Variable para bucle*/

		for (x = n - 1; x >= n; x--)
		{
			y = a[n - 1 - x];
			a[n - 1 - x] = a[x];
			a[x] = y;
		}
}
