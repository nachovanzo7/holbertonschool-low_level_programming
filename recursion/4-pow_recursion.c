#include "main.h"

/**
*_pow_recursion - Devuelve un numero elevado a otro
*Return: devuelve el numero potenciado
*@x: numero base
*@y: numero exponencial
*/

int _pow_recursion(int x, int y)
{
	if (y == 0 || y == 1)
		return (1);

	else if (y < 0)
		return (-1);

	x *= _pow_recursion(x, (y - 1));

	return (x);
}
