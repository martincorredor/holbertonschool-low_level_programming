#include "holberton.h"

/**
  *_puts - prints a string to stdio
  *@str: character
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
