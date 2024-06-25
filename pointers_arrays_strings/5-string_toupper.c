#include "main.h"

/**
*string_toupper - Cambia toda minuscula a mayuscula
*Return: no retorna nada
*@str: string de caracteres
*/

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		x[i] -= 32;

		i++;
	}

	return (x);
}
