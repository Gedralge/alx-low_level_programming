#include <stdio.h>
/**
 * main - print possible combination of two 2-digit
 * numbers
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int j, k;

	for (j = 0; j < 100; j++)
	{
		for (k = 0; k < 100; k++)
		{
			if (k > j)
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
				if (j != 98)
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

