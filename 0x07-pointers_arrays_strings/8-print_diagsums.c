#include "holberton.h"
#include <stdio.h>

/**
  *print_diagsums - summ diagonal values of array
  *@a: array
  *@size: size of array
  */

void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		d1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		d2 += a[i];
	}
	printf("%d, %d\n", d1, d2);
}
