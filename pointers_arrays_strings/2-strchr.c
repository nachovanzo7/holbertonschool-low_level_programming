#include "main.h"

/**
 *_strchr - Imprime a partir de una letra en un string
 *Return: retorna el string
 *@s: string para imprimir
 *@c: a partir de esta letra se imprimira el string
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return ('\0');
}
