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
	unsigned int gerrol;
	int ethan;

	gerrol = 0;
	if (!b)
		return (0);
	for (ethan = 0; b[ethan] != '\0'; ethan++)
	{
		if (b[ethan] == '1')
			gerrol += 1;
	}
	return (gerrol);
}

