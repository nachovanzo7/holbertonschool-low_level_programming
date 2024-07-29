#include "lists.h"
#include <stdlib.h>

/**
 *free_list - Libera la memoria de list_t
 *Return: no retorna nada
 *@head: puntero a la lista para liberar
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
