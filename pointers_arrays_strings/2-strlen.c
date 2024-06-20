#include "main.h"

/**
*_strlen - Contar el largo del string
*Return: no retorna nada
*@s: cada letra del string
*/

int _strlen(char *s)
{
	int cant;

	cant = 0;

	for (; *s != '\0'; s++)
	{
		cant++;
	}

	return (cant);
}

