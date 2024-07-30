#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *dlistint_len - devuelve el numero de elementos en el linked list
 *Return: retorna el numero de elementos en la lista
 *@h: elemento de la lista
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}

