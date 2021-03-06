#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
  * _calloc - Allocates memory for an array
  *@nmemb: array elements
  *@size: number of bytes of the elements
  *Return: NULL, NULLL, pointer to array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)p + i) = 0;
	}
	return (p);
}
