#include "holberton.h"

/**
  *_strspn - gets the length of a substring
  *@s: string
  *@accept: substring
  *Return: length of s == accept
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (n);
	}
	return (n);
}
