#include "main.h"

/**
 *_strspn - Longitud de un substring de prefijo
 *Return: retorna la longitud del substring
 *@s: String
 *@accept: Prefijo
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				b++;
				break;
			}

			else if (accept[x + 1] == '\0')
				return (b);
		}

		s++;
	}

	return (b);
}
