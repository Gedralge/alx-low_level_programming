#include "main.h"

/**
 * _isupper - checks whether a character is uppercase
 * @c: the integer to be supplied by user.
 * Return: 0 or 1.
 */

int _isupper(int c)
{
	if (c >+ 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

