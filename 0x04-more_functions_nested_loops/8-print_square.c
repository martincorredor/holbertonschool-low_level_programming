#include "holberton.h"

/**
  *print_square - Print square
  *@size: frame size
  */


void print_square(int size)
{
	int f, c;

	if (f <= size)
	{
		_putchar('\n');
	}
	for (f = 1; f < size; f++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
