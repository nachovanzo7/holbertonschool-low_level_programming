#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

/**
*print_list - Imprime todos los elementos de list_t
*Return: retorna la cantidad de nodos
*@h: puntero de la estructura utilizada
*/

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *lista;

	lista = h;
	i = 0;

	while (lista != NULL) /* Recorrer hasta la "cola" de la lista */
	{
		if (lista->str == NULL) /* En caso de string nulo */
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", lista->len, lista->str);

		lista = lista->next; /*Avanzo al siguiente nodo */

		i++;
	}

	return (i);

}
