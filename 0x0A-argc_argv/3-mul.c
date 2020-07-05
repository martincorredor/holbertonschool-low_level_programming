#include <stdio.h>
#include "holberton.h"

/**
  *main - print product of two numbers
  *@argc: argument counter
  *@argv: pointer to array wich contain the two numbers
  *Return: 0 on success, 1 if two arguments not exist
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
