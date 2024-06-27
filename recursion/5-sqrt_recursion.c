include "main.h"

/**
 *_sqrt_recursion - Devuelve el numero base de una exponencial
 *Return: retorna el numero base
 *@n: el numero exponenciado
 */

int _sqrt_recursion(int n)
{
	return (square(n + 1));
}

int square(int n, int i)
{
	int x = i * i; /* Comienzo a calcular el cuadrado de un numero */

	if (x > n) /* El exponente no puede ser mayor al resultado */
		return (-1);

	if (x == n)
		return (i);

	return (_sqrt_recursion(n, i + 1);

}
