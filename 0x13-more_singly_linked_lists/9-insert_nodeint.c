#include "lists.h"

/**
  *insert_nodeint_at_index - Insert new node in the index position
  *@head: linked list
  *@idx: position of new node
  *@n: content of new node
  *Return: new node, or Null if failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int itr = 0;
	listint_t *new_node, *aux;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	aux = *head;
	while (i < (idx - 1))
	{
		aux = aux->next;
		i++;

		if (aux == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
