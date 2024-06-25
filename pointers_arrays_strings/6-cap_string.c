#include "main.h"

/**
*cap_string - Capitalizar cada palabra del string
*Return: retorna el string
*@x: string ingresado
*/

char *cap_string(char *x)
{
	int i = 0;

	/*Recorro el string*/
	while (x[i])
	{
		if (x[i] == ' ')
			x[i + 1] -= 32;

		i++;
	}

	return (x);
}
