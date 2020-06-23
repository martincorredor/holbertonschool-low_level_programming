#include "holberton.h"

/**
  *swap_int - entry points
  *@a: pointer1
  *@b: pointer2
  */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
