#include "main.h"

/**
*rev_string - Devuelve el string en reversa
*Return: no retorna nada
*@s: el string para devolver invertido
*/

void rev_string(char *s)
{

	int i = 0;
	int x, y;
	char *p;
	char c;

	p = s;

	while (s[i] != '\0')
	{
		i++;
	}
	for (y = 1; y < i; y++)
	{
		p++;
	}
	for (x = 0; x < (i / 2); x++)
	{
		c = s[x];
		s[x] = *p;
		*p = c;
		p--;
	}
}
