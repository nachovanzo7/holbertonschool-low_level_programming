#include "main.h"

/**
*_strcpy - Guarda valor de src en dest + final de linea
*Return: retorna el texto
*@dest: espacio de memoria
*@src: texto para copiar
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; x != '\0'; x++)
		dest[x] = src[x];

	x = x + 1;

	dest[x] = '\0';

	return (dest);
}
