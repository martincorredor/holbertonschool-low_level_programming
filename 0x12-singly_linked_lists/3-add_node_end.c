#include "lists.h"

/**
 *_strlen - returns the length of a given string
 *@s: string to check
 *Return: Return the length of the string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
  *add_node_end - adds a new node in the end of the list
  *@head: linked list
  *@str: data for new node
  *Return: pointer of new element, or Null if failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if (str == NULL)
		return (NULL);
	if (srtdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
