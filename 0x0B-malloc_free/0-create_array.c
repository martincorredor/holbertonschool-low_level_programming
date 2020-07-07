#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  *create_array - create an array of characters
  *@size: number of characters
  *@c: characters
  *Return: NULL if size <= 0, array of characters
  */

char *create_array(unsigned int size, char c)
{
	char *create;
	int i;

	if (size <= 0)
		return (NULL);

	create = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
		*(create + i) = c;
	return (create);
}
