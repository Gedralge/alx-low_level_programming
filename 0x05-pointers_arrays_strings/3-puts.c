#include "main.h"

/**
 * _puts - prints a string
 * @str:pointer char
 * return:void
 */
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
	return (str);
}

