#include <stdio.h>

/**
 * main - cool function ig
 * Description: Does cool stuff
 * Return: exit code to OS
 */
int
main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					int num1 = i * 10 + j,
					    num2 = k * 10 + l;
					if (num2 <= num1)
						continue;
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (num1 != 98 || num2 != 99)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
