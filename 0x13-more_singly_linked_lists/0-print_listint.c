#include "lists.h"

/**
  *print_listint - Prints number of nodes
  *@h: list
  *Return: number of nodes to the list
  */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes += 1;
		h = h->next;
	}
	return (num_nodes);
}
