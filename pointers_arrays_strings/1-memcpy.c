#include "main.h"
#include <stddef.h>
/**
 * _memcpy - Copia texto en un area de memoria
 * Return: devuelve el string con el texto copiado
 * @dest: string donde se copia
 * @src: string por copiar
 * @n: cantidad de lineas por copiar
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
