#include "lists.h"

/**
  *get_nodeint_at_index - Return n-node of linked list
  *@head: linked list
  *@index: nth node
  *Return: nth-node, or Null if failed 
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	WHILE((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);

	return (NULL);
}
