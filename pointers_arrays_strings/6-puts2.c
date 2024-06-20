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
		str++;
		_putchar(*str);
	}

	_putchar('\n');
}
