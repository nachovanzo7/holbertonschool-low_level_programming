#include "main.h"
/**
*_strcmp - Compara dos strings devolviendo la resta de sus incompatibilidades (ASCII)
*Return: retorna el resultado de la resta
*@s1: primer string a comparar
*@s2: segundo string a comparar
*/

int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int x;
	int y = 0;
	int res;

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;


/* Hasta donde se va a hacer la comparacion (string mas corto) */

	if (len1 <= len2)
		x = len1;

	else
		x = len2;

/* Comparo uno a uno los caracteres del string */

	while (y <= x)
	{
		if (s1[y] == s2[y])
		{
			y++;
			continue; /*Continua con la proxima iteracion*/
		}

		else
		{
			res = s1[y] - s2[y]; /* Resto los valores ASCII de s1 y s2 */
			break;
		}

		y++;
	}

	return (res);
}
