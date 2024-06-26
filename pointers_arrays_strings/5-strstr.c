#include "main.h"

/**
 *_strstr - Localizar un substring
 *Return: retorna el substring
 *@haystack: string para buscar
 *@needle: string a localizar
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			while (haystack[x] == needle[x])
			{
				if (needle[x + 1] == '\0')
					return (haystack);

				x++;
			}
		}

		haystack++;
	}

	return ('\0');
}
