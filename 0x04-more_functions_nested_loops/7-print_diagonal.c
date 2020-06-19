#include "holberton.h"

/**
  *print_diagonal - Print diagonal line
  *
  *@n: Number
  */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}
}
