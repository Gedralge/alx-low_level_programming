#include "main.h"

/**
 * _memset - fills memory with aconstant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: first byte to change
 * Return: pointer to modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

