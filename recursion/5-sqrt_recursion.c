#include "main.h"

int square(int n, int i);

/**
 *_sqrt_recursion - Devuelve la raiz cuadrada de un numero
 *Return: retorna el valor de la raiz cuadrada
 *@n: el numero base
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
*square - hace los calculos necesarios para obtener la raiz de un numero
*Return: retorna el resultado del calculo
*@n: numero del que queremos obtener la raiz
*@i: comienzo del calculo de raiz
*/

int square(int n, int i)
{
	int x = i * i; /* Comienzo a calcular el cuadrado de un numero */

	if (x > n) /* El exponente no puede ser mayor al resultado */
		return (-1);

	if (x == n)
		return (i);

	return (square(n, i + 1));

}
