#include <stdio.h>

/**
 * main - prints alphabet in lowercase except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}

	putchar('\n');

	return (0);
}

