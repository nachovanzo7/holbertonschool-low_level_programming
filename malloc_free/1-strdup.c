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

	if (str == NULL) /*El string ingresado no es nulo */
		return (NULL);

	for (y = 0; str[y]; y++) /* Calculo longitud de string */
		x++;

	p = malloc(sizeof(char) * (x + 1)); /* Creo espacio en memoria */

	if (p == NULL) /* Hay espacio disponible */
		return (NULL);

	for (y = 0; y < x; y++) /* Copio string */
	{
		p[y] = str[y];
	}

	p[x] = '\0';

	return (p);
}
