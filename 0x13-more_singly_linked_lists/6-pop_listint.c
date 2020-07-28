#include "lists.h"

/**
  *pop_listint - Deletes the head node and
  * return the head node.s data
  *@head: linked list
  *Return: Headś data
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;

	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
