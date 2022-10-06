#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 *
 * @nmemb: members of array
 * @size: size of each member
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int m;
	char *gedral;

	if (nmemb == 0 || size == 0)
		return (NULL);
	gedral = malloc(nmemb * size);
	if (gedral == NULL)
		return (gedral);
	for (m = 0; m < (nmemb * size); m++)
		gedral[m] = 0;
	return (gedral);
}

