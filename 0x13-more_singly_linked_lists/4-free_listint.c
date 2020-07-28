#include "lists.h"

/**
  *free_listint - Frees the linked list
  *@head: linked list
  */

void free_listint(listint_t *head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux = head;
		aux = aux->next;
		free(aux);
	}
}
