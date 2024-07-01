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
	int x = 0;
	int y;

	if (str == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		x++;

	p = malloc(sizeof(char) * (x + 1));

	for (y = 0; y < x; y++)
	{
		p[y] = str[y];
	}

	p[x] = '\0';

	return (p);

}
