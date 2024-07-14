#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void imprimir_char(va_list argumento);
void imprimir_int(va_list argumento);
void imprimir_float(va_list argumento);
void imprimir_string(va_list argumento);

/**
*print_all - Imprime todo los parametros
*Return: no retorna nada
*@format: tipo de variables
*/

void print_all(const char * const format, ...)
{
	convertir_tipo convt[] = {
		{"c", imprimir_char},
		{"i", imprimir_int},
		{"f", imprimir_float},
		{"s", imprimir_string},
		{NULL, NULL}
	};

	int i, n;
	char *s = ""; /*Separador para cada argumento*/
	va_list argumento; /*Lista de argumentos variables*/

	va_start(argumento, format); /*Inicializo el recorrido de argumentos*/

	i = 0;
	while (format && format[i]) /*Si existe el formato ingresado*/
	{
		n = 0;
		while (convt[n].tipo) /*Recorro los tipos de variable*/
		{
			if (format[i] == *convt[n].tipo)
			{/*Cuando el tipo se encuentre en la estructura*/
				printf("%s", s);
				convt[n].p(argumento); /*Llamo a la funcion correspondiente*/
				s = ", ";
			}
			n++;
		}
		i++;
	}
	printf("\n");
	va_end(argumento); /*Finalizo el uso del va_list*/
}


/**
*imprimir_char - Imprime un char
*Return: no retorna nada
*@argumento: argumento inicializado
*/

void imprimir_char(va_list argumento)
{
	printf("%c", va_arg(argumento, int));
}

/**
*imprimir_int - Imprime un int
*Return: no retorna nada
*@argumento: argumento inicializado
*/

void imprimir_int(va_list argumento)
{
	printf("%i", va_arg(argumento, int));
}

/**
*imprimir_float - Imprime un int
*Return: no retorna nada
*@argumento: argumento inicializado
*/

void imprimir_float(va_list argumento)
{
	printf("%f", va_arg(argumento, double));
}

/**
*imprimir_string - Imprime un string
*Return: no retorna nada
*@argumento: argumento inicializado
*/

void imprimir_string(va_list argumento)
{
	char *string;

	string = va_arg(argumento, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}
