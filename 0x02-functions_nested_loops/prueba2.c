#include <stdio.h>

int main(void)
{
	char n;
	int f;
	for (f = 0; f < 10; f++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		putchar('\n');
	}
	return(0);
}

