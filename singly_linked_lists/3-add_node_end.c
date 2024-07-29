#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/**
*add_node - Reemplaza e imprime el head del Linked Lists
*Return: retorna la direccion de memoria del head
*@head: espacio de memoria del primer nodo
*@str: string pasado por parametro (valor (list_t).strx
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *p, *end;

	i = 0;

	p = (list_t *)malloc(sizeof(list_t)); /* Asigno memoria para la estructura */

	if (p == NULL) /* Espacio de memoria no disponible */
		return (NULL);

	if (head == NULL) /* Enviado NULL por parametro */
		return (NULL);

	p->str = strdup(str);

	while (str[i] != '\0') /*Calcular longitud de string */
                i++;

	p->len = i; 

	if (p->str == NULL) /* Si el string es nulo - Libero espacio */
	{
		free(p);
		return (NULL);
	}
	
	p->next = NULL; /*Inicializo siguiente nodo*/

	if (*head == NULL)
	{
		*head = p;
		return p;
	}

	end = *head; 

	while (end->next != NULL) 
		end = end->next;

	end->next = p;
	return (p);


}
