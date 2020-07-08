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
	char *arr;
	int i = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (int)size; i++)
	{
		*(arr + i) = c;
	}
	*(arr + i) = '\0';
	return (arr);
}
