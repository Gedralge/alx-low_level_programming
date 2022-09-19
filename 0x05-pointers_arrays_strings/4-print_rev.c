#include "main.h"

/**
 * * print_rev - print a string
 * @s:pointer char
 * return:void
 */
void print_rev(char *s)
{
	int p, n;

	for (p = 0; s[p] != '\0'; p++)
	{
		continue;
	}
	n = p - 1;
	for (p = n; p >= 0 ; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
	return (s);
}

