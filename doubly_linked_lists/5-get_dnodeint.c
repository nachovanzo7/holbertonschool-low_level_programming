#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *Return: retorna nodo de la lista
 *@head: nodo de lista
 *@index: posicion del nodo a devolver
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
