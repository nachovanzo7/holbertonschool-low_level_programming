#include "main.h"

/**
*_strlen_recursion - Devuelve la longitud del string
*Return: retorna el largo del string
*@s: string para medir su longitud
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s) /*recorro el string*/
	{
		x++; /*Cada vuelta se le suma uno a la variable longitud*/
		x += _strlen_recursion(s + 1);
		/*Continua en la siguiente posicion del string (s + 1)*/
	}

	return (x);
}
