#include "main.h"

/**
 *_memset - Llenar memoria con un bit contante
 *Return: retorna un string
 *@s: array
 *@b: byte constante
 *@n: cantidad de repeticiones en el array 
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x <= n; x++)
	{
		s[x] = b;
	}

	return (s);
}
