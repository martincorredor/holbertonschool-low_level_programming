#include <stdio.h>
#include "holberton.h"

/**
  *main - print number of arguments passed to program
  *@argc: arguments counter
  *@argv: Pointer to array to arguments
  *Return: 0
  */

int main(int argc, char *argv[] _attribute_((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
