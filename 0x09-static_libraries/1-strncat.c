#include "holberton.h"

/**
  *_strncat - concatenes two strings
  *@dest: string 1
  *@src: string 2
  *@n: number of characters
  *Return: string concatened
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
