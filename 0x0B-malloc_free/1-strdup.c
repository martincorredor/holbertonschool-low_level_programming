#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * _strdup - Return a pointer to new copy of string
  *@str: string to copied
  *Return: Pointer to copy string
  */

char *_strdup(char *str)
{
	char *copy;
	int i = 0;
	int len = 0;


	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;

	copy = malloc(sizeof(char) * len);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(copy + i) = *(str + i);
	}

	return (copy);

}
