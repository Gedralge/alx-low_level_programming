#include "main.h"

/**
 * print_alphabeta_x10 - prints the alphabet x10
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times followed by anew line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}

