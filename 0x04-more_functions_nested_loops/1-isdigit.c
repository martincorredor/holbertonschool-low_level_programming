#include "holberton.h"

/**
 * _isdigit - check if is a digit letter
 *
 * @c: character to check for digit
 * Return: Digit number returns 1, if not returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
