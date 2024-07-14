#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Funcion main - Calculos simples
*Return: no retorna nada
*@argc: cantidad de argumentos del array
*@argv: dos enteros
*/

int main(int argc, char *argv[])
{
	int (*calculo)(int, int); /*Puntero a funcion */
	char simbolo;
	int resultado, x, y;

	if (argc != 4) /* Nom (0) - Num1 (1) Simbolo (2) Num2 (3) */
	{
		printf("%s\n", "Error");
		return (98);
	}

	simbolo = *(argv[2]); /* ---> posicion 2 es el simbolo */

	if (!atoi(argv[3]) && ((simbolo == '/' || simbolo == '%'))) /*No se puede dividir entre negativos*/
	{
		printf("%s\n", "Error");
		return (2);
	}

	calculo = get_op_func(&simbolo);

	if (calculo == NULL || argv[2][1] != '\0') /*Si el calculo es nulo o el simbolo contiene mas caracteres*/
	{
		printf("%s\n", "Error");
		return (3);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	resultado = calculo(x, y);

	printf("%i\n", resultado);

	return (0);

}
