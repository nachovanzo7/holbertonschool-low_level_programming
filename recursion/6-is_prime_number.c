#include "main.h"


/**
*divisible - Hace el calculo de si un numero es primo o no
*Return: retorna 1 si es primo, 0 caso contrario
*@n: numero para saber si es primo o no
*@divisor: es el divisor del numero
*/

int divisible(int n, int divisor)
{
	if ((n % divisor) == 0)
		return (0); /* Si el numero ingresado es divisible no es primo */

	else if (divisor == (n / 2))
		return (1); /* Ej: 5 / 2 = 2.5 (2) - si es igual al divisor es primo */
			    /* Ya que se ejecuta luego de la condicion anterior */

	return (divisible(n, divisor + 1));

}

/**
 *is_prime_number - saber si un numero es primo o no
 *Return: retorna 1 si es primo, 0 caso contrario
 *@n: numero para saber dicho factor
 */

/* Si un numero no es divisible entre 2 - 3 - 5 es primo */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3) /*si es uno de estos numeros, es primo */
		return (1);

	return (divisible(n, divisor));
	/* Comienza en 2 para saber si es un numero par */
	/*Si es par = es divisible entre 2 - no es primo*/
}
