#include "lists.h"

/**
  *sum_listint - Return the sum of datas of linked list
  *@head: linked list
  *Return: sum of all list's data
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
