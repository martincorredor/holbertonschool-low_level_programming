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
	unsigned int i;

	if (str == NULL)
		return (NULL);


	copy = malloc(sizeof(str));

	for (i = 0; str[i] != '\0'; i++)
		*(copy + i) = *(str + i);
	copy[i] = '\0';

	if (copy == NULL)
		return (NULL);

	return (copy);

}
