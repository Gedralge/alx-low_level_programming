#include <stdio.h>
/**
 * main - print possible combo of 3
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int l, m, p;

	for (l = 0; l <= 9; l++)
	{
		for (m = 1; m <= 9; m++)
		{
			for (p = 2; p <= 9; p++)
			{
				if (p > m && m > l)
				{
					putchar(l + '0');

					putchar(m + '0');

					putchar(p + '0');

					if (l != 7)
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

