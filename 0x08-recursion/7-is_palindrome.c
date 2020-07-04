#include "holberton.h"

/**
  *compare - compares head and tail indices
  *@head: index string 1
  *@tail: index string 2
  *Return: 1 if palindrome, 0 if not
  */
int compare(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}

/**
  *_strlen - find length of string
  *@s: string
  *Return: lenght of string
  */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}


/**
  *is_palindrome - check if palindrome
  *@s: string to check
  *Return: 1 if palindrome, 0 if not
  */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
