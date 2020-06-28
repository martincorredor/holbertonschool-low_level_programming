#include "holberton.h"

/**
  * _memset - fills memory with a constant byte
  *@s: character in memory replaced
  *@b: character to replaced
  *@n: integer. number time to replace b
  *Return: character replaced
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
