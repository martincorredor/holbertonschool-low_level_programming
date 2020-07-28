#include "lists.h"

/**
  *listint_len - Returns the number of elemets in a list
  *@h: linked list
  *Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}
	return (num_nodes);
}
