#include "holberton.h"

/**
  * _pow_recursion - raises a number
  *@x: base
  *@y: powed
  *Return1: case 1
  *Return2: case 2
  *Return3: case 3
  *Return4: case 4
  *Return: value x raised to the b power
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	if (x == 0)
	{
		return (x);
	}
	if (x == 1)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
