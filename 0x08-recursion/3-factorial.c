#include "holberton.h"

/**
  *factorial - print factorial of number
  *@n number
  *return: factorial
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
