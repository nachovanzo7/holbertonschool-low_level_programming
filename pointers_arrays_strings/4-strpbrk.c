#include "main.h"

/**
 *_strpbrk - buscar cualquier conjunto de bytes en el string
 *Return: devuelve un char
 *@s: string para buscar
 *@accept: conjunto de bytes para buscar
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return ('\0');
}
