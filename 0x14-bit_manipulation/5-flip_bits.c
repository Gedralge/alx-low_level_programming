#include "main.h"
#include <stdio.h>

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip to get from
 * one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count;

	diff = n ^ m;
	count = 0;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}


