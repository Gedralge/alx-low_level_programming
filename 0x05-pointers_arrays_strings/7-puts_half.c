#include "main.h"

/**
 * puts_half - length of string
 * @dtr:char
 * Return:int
 */
void puts_half(char *str)
{
	int i, l;

	i = 0;
	while (str[i])
		i++;
	l = i / 2;
	if (i % 2)
		l = 1;
	while (l < i)
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}

