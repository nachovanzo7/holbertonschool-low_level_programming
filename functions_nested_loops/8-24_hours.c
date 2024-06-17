#include "main.h"

/**
*jack_bauer - Obtener todos los minutos del dia
*Return: sin retorno
*/

void jack_bauer(void)
{
	int hs;
	int min;

	for (hs = 0; hs <= 23; hs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hs / 10) + '0'); /*Obtener primer digito de la hora*/
			_putchar((hs % 10) + '0'); /*Obtener el ultimo digito de la hora*/
			_putchar(':');
			_putchar((min / 10) + '0'); /*Obtener primer digito de los minutos*/
			_putchar((min % 10) + '0'); /*Obtener el ultimo digito de los minutos*/
			_putchar('\n');
		}
	}
}
