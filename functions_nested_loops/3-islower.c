#include "main.h"

/**
*_islower - Verifica las letras minusculas
*Return: retorna 0 o 1
*@c: Es una letra del abecedario
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
