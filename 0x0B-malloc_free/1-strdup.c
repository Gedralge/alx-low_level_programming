#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to duplicate
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *dk;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	dk = malloc(sizeof(char) * (size + 1));
	if (dk == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		dk[i] = str[i];
	dk[size] = '\0';
	return (dk);
			}

