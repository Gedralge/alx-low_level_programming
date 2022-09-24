#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: Parameter
 * Return:returns nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
			_putchar('-');
		_putchar('\n');
	}
}

