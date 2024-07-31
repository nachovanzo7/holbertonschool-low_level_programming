#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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
