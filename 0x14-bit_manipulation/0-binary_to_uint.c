#include "main.h"
/**
 * binary_to_uint - converts a binary number to a unsigned int
 * @b:binary
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	int len, temp;

	if (!b)
		return (0);
	count = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, temp *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			count += temp;
		}
	}
	return (count);
}

