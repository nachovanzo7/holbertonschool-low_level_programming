#include "main.h"

/**
*swap_int - swapear valores de variables
*Return: no retorna nada
*@a: valor uno de variable
*@b: valor dos de variable
*/

void swap_int(int *a, int *b)
{

int x = *a;

*a = *b;
*b = x;
}
