#include "holberton.h"

/**
  *_puts - prints a string to stdio
  *@str: character
  */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar(10);
}
