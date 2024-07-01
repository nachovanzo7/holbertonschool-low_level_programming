#include "main.h"
#include <stdlib.h>

/**
 *str_concat - Concatena dos string
 *Return: retorna el string o NULL en caso de error
 *@s1: primer string
 *@s2: segundo string
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int x;
	char *p;
	int y = 0;

	if (s1 == NULL) /*El string ingresado no es nulo */
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x]; x++)
	      len++;

	for (x = 0; s2[x]; x++)
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
	{
		p[x] = s1[x];
		y++;
	}

	for (x = 0; s2[x] != '\0'; x++)
	{
		p[y] = s2[x];
		y++;
	}

	p[y] = '\0';

	return (p);


}
