#include "main.h"

/**
 * puts_half - prints half of the string
 *@str: string being tested
 *
 */

void puts_half(char *str)
{
	int c, e, n;

	for (c = 0; str[c] != '\0'; c++)
		;
	if ((c % 2) == 0)
	{
		for (e = c / 2 ; str[e] != '\0' ; e++)
			_putchar(str[e]);
	}
	else
	{
		for (n = (c -1 ) / 2; str[n] != '\0'; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}

