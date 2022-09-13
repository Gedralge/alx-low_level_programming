#include <stdio.h>

/**
 * print _alphabet - utilizes on the _putchar function to print
 *                                          the alphabet a - z
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;

	}
	_putchar('\n');
}
