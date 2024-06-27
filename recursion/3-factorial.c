#include "main.h"

/**
 *factorial - Devuelve el factorial de un numero
 *Return: si es menor a 0 se retorna -1, caso contrario el factorial
 *@n: el numero para calcular al factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1); /*Indica error*/
	else if (n == 0 || n == 1)
		return (1); /*Factorial de 0 es 1*/

	/* Factorial de X: !5 = 5 * 4 * 3 .. * 1 */
	/* Se calcula de forma asc - (1 * 2) * (2 * 3) * (6 * 4) * (24 * 5) */

	n *= factorial(n - 1);
	/* (*=) al llegar a 1 se retorna 1 y comienza la ecuacion anterior */

	return (n);
}
