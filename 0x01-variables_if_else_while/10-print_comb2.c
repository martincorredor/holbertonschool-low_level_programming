#include <stdio.h>

/**
 * main - outputs all digits in base 10 number system using putchar
 *
 * Description: Uses a for loop to putchar all numbers from 0-9
 * Return: returns 0
 */
int main(void)
{
int i, i2;

for (i = '0'; i <= '9'; i++)
{
for (i2 = '0'; i2 <= '9'; i2++)
{
putchar(i);
putchar(i2);
if (i == '9' && i2 == '9')
{
}
else
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
