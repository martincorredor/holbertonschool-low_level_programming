#include "holberton.h"

/**
  * _strlen_recursion - length of string
  *@s: pointer to string
  *return: number of characters of string
  *Return: lenght of string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
