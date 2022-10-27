#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0
 * if there is an unconvertable char
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int gerrol, ethan;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (ethan = 1, gerrol = 0, len--; len >= 0; len--, ethan *= 2)
	{
		if (b[len] == '1')
			gerrol += ethan;
	}

	return (gerrol);
}

