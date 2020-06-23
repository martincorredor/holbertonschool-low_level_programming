#include "holberton-h"

/**
  *_strlen - return length of a string
  *@s: character
  *Return: lenght of string
  */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
