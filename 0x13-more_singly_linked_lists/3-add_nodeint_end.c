#include "lists.h"

/**
  *add_nodeint_end - Adds new node to the end of list
  *@head: pointer to head of linked list
  *@n: Content of node
  *Return: Pointer to node added of end to list
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *aux;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		aux = *head;

		while (aux != NULL)
			aux = aux->next;
		aux->next = new_node;
	}
	return (new_node);

}
