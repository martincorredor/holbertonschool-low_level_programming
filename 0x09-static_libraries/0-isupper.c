#include "holberton.h"

/**
 * _isupper - check if is a upper letter
 *
 * @c: character to check for upper
 * Return: Lowercase number returns 1, if not returns 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
