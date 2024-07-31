#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_dlistint - Liberar espacio de memoria
 *Return: no retorna nada
 *@head: lista a la cual liberar de la memoria
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
