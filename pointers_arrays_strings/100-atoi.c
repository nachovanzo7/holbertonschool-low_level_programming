#include "main.h"
#include <string.h>

/**
 * _atoi - Entry point
 *
 * @s: 'varaibles'
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int x = 0;
	int i = 0;
	int simb = -1;
	int res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			simb *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			x = 1;
		}

		else if (x == 1)
			break;
		i++;
	}

	res *= simb;

	return (res);
}
