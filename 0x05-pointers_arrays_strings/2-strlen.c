#include "holberton-h"

/**
  *_strlen - return length of a string
  *@s: character
  *Return: lenght of string
  */

int _strlen(char *s)
{
	int n;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
