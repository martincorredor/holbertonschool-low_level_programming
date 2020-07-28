#include "lists.h"

/**
  *delete_nodeint_at_index - Deletes a node in index position of a list
  *@head: linked list
  *@index: Position especified to delet node
  *Return: 1 if succeded, or -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux, *aux2;

	if (*head == NULL)
		return (-1);
	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}

	while (i < (index - 1) && aux != NULL)
	{
		aux = aux->next;
		i++;
	}

	if (i != (index - 1) || aux->next == NULL)
		return (-1);
	aux2 = aux->next;
	aux->next = (aux->next)->next;
	free(aux2);

	return (1);
}
