#include "main.h"

/**
*rev_string - Devuelve el string en reversa
*Return: no retorna nada
*@s: el string para devolver invertido
*/

void rev_string(char *s)
{
	int x = 0;
	int y, u;
	char *p;
	char c;

	p = s;

	while (s[x] != '\0')
		x++;

	for (y = 1; y < x; y++)
	{
		p++;
	}

	for (u = 0; 0 < (x / 2); u++)
        {
                c = s[u];
		s[u] = *p;
		*p = c;
		p--;
        }
}
