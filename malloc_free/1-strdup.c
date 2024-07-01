#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Devolver puntero a un espacio de memoria recien asignado
 *Return: retorna puntero a el nuevo string 
 *@str: string 
 */

char *_strdup(char *str)
{
	char *p;
	char *pp;
	int x = 0;
	int y;

	if (str == NULL)
		return (NULL);

	while (*str)
		x++;

	p = malloc(x * sizeof(char));

	for (y = 0; y < x; y++)
	{
		p[y] = str[y];
	}
	
	pp = p;

	return (pp);

}
