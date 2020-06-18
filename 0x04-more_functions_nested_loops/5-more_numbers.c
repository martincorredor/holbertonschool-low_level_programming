#include "holberton.h"

/**
 * void more_numbers - prints 10 times the numbers
 *
 * Description: Uses a nested loop to print 10 times the numbers
 */

void void more_numbers(void)

{
	int b;

	for (b = 0; b < 10; b++)
	{
		int a;

		for (a = '0'; a <= '14'; a++)
		{
			_putchar(a);

		}
		_putchar('\n');
	}
}
