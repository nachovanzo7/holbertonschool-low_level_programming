#include "main.h"

/**
*_strncpy - Copiar un string limitado
*Return: retorna el string copiado en el otro
*@dest: el string modificado y devuelto
*@src: string que se le copia
*@n: cantidad de carateres que se le copia al string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

/*  A partir del string inicial le copio el otro string en el comienzo */

	for (x = 0; x < n && src[x]; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}

