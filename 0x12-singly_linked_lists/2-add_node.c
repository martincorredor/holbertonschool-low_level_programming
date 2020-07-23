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
  *add_node - Add a node in the linked list
  *@head: current head of list
  *@str: string
  *Return: pointer to a new node
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (head == NULL)
		new_node->next = *head;

	*head = new_node;


	return (new_node);
}
