#include "lists.h"

/**
  *list_len - Return the number of elements of a linked list
  *@h: linked list
  *Return: Number of elements (nodes) of the linked list
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
