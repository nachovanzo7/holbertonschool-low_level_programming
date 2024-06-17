#include "main.h"
#include <math.h>

/**
*_abs - Devuelve el valor absoluto de un numero
*Return: el valor absoulto
*@x: el numero
*/

int _abs(int x)
{
	if (x < 0)
		return (x * -1);

	else
		return (x);


}
