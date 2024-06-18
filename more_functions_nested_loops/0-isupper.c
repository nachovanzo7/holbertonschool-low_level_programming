#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
*_isupper - Devuelve si un caracter es mayusculas
*Return: devuelve 0 o 1
*@c: el entero recibido para verificar
*/

int _isupper(int c)
{

	printf("%c: %d", c, isupper(c));

	return (isupper(c));
}
