#include "lists.h"
#include <stdio.h>

/**
 * list_len - Devuelve la cantidad de nodos
 * Return: retorna la cantidad de nodos
 * @h: puntero de la estructura utilizada
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *lista;

	i = 0;
	lista = h;

	while (lista != NULL) /* Recorrer hasta la "cola" de la lista */
	{
		lista = lista->next; /*Avanzo al siguiente nodo */

		i++;
	}

	return (i);
}
