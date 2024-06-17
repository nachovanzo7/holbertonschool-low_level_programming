#include "main.h"

/**
*_isalpha - Chequea si es una letra o numero
*Return: retorna 0 o 1
*@c: es un entero
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
