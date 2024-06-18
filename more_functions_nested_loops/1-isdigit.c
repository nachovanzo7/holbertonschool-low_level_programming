#include "main.h"
#include <ctype.h>

/**
*_isdigit - Retorna si un numero es un digito o no
*Return: retorna 1 o 0
*@c: es un entero ingresado por parametro
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);

	else
		return (0);
}
