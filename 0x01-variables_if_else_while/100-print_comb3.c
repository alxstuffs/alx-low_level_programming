#include <stdio.h>

/**
 * main - cool function ig
 * Description: Does cool stuff
 * Return: exit code to OS
 */
int
main(void)
{
	int n1, n2,
	    n1_end = 9,
	    n2_end = 9;

	for (n1 = 0; n1 <= n1_end; n1++)
	{
		for (n2 = 0; n2 <= n2_end; n2++)
		{
			if (n2 <= n1)
				continue;
			putchar('0' + n1);
			putchar('0' + n2);
			if (n2 != n2_end || n1 + 1 != n2)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
