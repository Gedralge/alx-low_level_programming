#include "main.h"

/**
 * print_number - prints an integer
 * @p: input integer
 * Return: no return
 */

void print_number(int p)
{
	unsigned int m, n, count;

	if (p < 0)
	{
		_putchar(45);
		m = p * -1;
	}
	else
	{
		m = p;
	}
	n = m;
	count = 1;
	while (n > 9)
	{
		n /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}

