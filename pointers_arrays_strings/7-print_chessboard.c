#include "main.h"

/**
 * print_chessboard - Prints a chess
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int fila, x2;

	for (fila = 0; a[fila][7]; fila++)
	{
		for (x2 = 0; x2 < 8; x2++)
			_putchar(a[fila][x2]);

		_putchar('\n');
	}
}
