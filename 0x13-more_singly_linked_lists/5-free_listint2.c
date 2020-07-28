#include "lists.h"

/**
  *free_listint2 - Frees linked list and
  *set Null to head
  *@head: linked list
  */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
}
