#include "main.h"

/**
*_strcat - Concatena un string al primer string pasado por parametro
*Return: retorna una cadena de caracteres
*@dest: string al que se le va a concatenar los demas
*@src: string que se concatena a "dest"
*/

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int x;

/* Obtengo el largo del string al que se le va a concatenar otro */

	while (dest[len] != '\0')
	{
		len++;
	}

/*  A partir del ultimo digito de dicho string se le concatena el otro */

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[len] = src[x];
		len++;
	}

	dest[len] = '\0';

	return (dest);


}
