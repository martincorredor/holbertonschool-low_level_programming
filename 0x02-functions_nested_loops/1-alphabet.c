#include "holberton.h"

/**
 * print_alphabet - print the alphabet followed by a new line
 *
 * Description: Uses the for loop to print the letters from "a" to "z"
 * Return
 */
void print_alphabet(void)
{
int a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}

_putchar('\n');
}
