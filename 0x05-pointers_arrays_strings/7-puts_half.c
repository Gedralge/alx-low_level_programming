#include "main.h"

/**
 * puts_half - length of string
 * @dtr:char
 * Return:int
 */
void puts_half(char *str)
{
	int i, k;

	i = 0;
	while (str[i])
		i++;
	k = i / 2;
	if (i % 2)
		k == 1;
	while (k < i)
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}

