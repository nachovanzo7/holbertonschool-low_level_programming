#include "function_pointers.h"

/**
 *int_index - Busca un entero en un array
 *Return: retorna el numero encontrado
 *@array: array de numeros
 *@size: longitud del array
 *@cmp: puntero a la funcion restrictiva
 */

int int_index(int *array, int size, int (*cmp)(int))
{	
	int x;
	int len = 0;
	int (*p)(int);

	p = cmp;

	for (x = 0; x < size; x++)
	{
		if ((*p)(array[x]))
			len++;
	}

	return (len);
}
