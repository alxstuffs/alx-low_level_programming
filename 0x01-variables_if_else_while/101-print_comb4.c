#include <stdio.h>

/**
 * main - cool function ig
 * Description: Does cool stuff
 * Return: exit code to OS
 */
int
main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j <= i)
				continue;
			for (k = 0; k <= 9; k++)
			{
				if (k <= j)
					continue;
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
