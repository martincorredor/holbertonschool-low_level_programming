include "lists.h"

/**
  *print_dlistint - Return the number of list's nodes
  *@h: Pointer type struct to list
  *Return: Number of nodes
  *
  */
size_t print_dlistint(const dlistint_t *h)
{
    /*First cretes a count of type unsigned int*/
    /*because the function is type size_t*/
    unsigned int number_of_nodes = 0;

    while (h != NULL)
    {
        printf("%i\n", h->n);
        h = h->next;
        number_of_nodes++;
    }
    return (number_of_nodes)
}
