#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size in bytes
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

