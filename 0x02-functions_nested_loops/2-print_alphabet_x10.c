#include "main.h"
#include <stdio.h>
/**
 * print_alphabeta-x10 - check alphabet lowercase
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times followed by anew line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

