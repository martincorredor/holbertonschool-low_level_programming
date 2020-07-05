#include <stdio.h>
#include "holberton.h"

/**
  *main - print the arguments passed to program
  *@argc: argument counter
  *@argv: pointer to array of arguments
  *Return: 0
  */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
