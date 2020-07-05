#include "holberton.h"

/**
  * _memcpy - copies memory area
  *@dest: character replaced
  *@src: character copied
  *@n: number to times copies src in dest
  *Return: character dest copied from src
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
