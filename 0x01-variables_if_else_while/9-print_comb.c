#include <stdio.h>

/**
 * main - cool function ig
 * Description: Does cool stuff
 * Return: exit code to OS
 */
int
main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
