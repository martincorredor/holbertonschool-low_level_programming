#include "holberton.h"

/**
 * void more_numbers - prints 10 times the numbers
 *
 * Description: Uses a nested loop to print 10 times the numbers
 */

void more_numbers(void)
{
	char i;
	int counter;
	
	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
