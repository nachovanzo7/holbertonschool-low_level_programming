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
		/*Si la primer letra del string es minuscula*/
		if (x[0] >= 'a' && x[0] <= 'z')
			x[0] -= 32;

		/* Si hay un espacio en blanco y la siguiente letra es minuscula*/
		if ((x[i] == ' ' || x[i] == '\n') && x[i + 1] >= 'a' && x[i + 1] <= 'z')
			x[i + 1] -= 32;

		i++;
	}

	return (x);
}
