#include "3-calc.h"
/**
*get_op_func - Devuelve la funcion determinada por simbolo
*Return: retorna el valor del calculo
*@s: simbolo que determina el calculo
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
			return ops[i].f;
		i++;
	}

	return (NULL);

}
