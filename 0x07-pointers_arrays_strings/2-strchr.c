#include "holberton.h"

/**
  * _strchr - Return a pointer to the first
  *ocurrence of caracter c in s
  *@s: string
  *@c: character to search
  *Return: string + character of the ocurrence
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
		return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	return ('\0');
}
