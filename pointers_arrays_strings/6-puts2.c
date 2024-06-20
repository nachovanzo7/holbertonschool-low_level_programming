#include "main.h"

/*
*
*
*
*/

void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
