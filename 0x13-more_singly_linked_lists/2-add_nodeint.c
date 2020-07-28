#include "lists.h"

/**
  *add_nodeint - add a node in the begginning of list
  *@head: Head of linked list
  *@n: content of the node
  *Return: element added
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_mode->next = *head;
	*head = new_node;

	return (new_node);
}
