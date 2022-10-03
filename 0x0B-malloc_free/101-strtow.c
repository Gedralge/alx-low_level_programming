#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int i, j, m = 0, l, k, count = 0, len;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	if (count == 0)
		return (NULL);
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (i = 0; str[i] != '\0' && m < count; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			words[m] = malloc((len + 1) * sizeof(char));
			if (words[m] == NULL)
			{
				for (k = 0; k < m; k++)
					free(words[m]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				words[m][l] = str[i];
			words[m][l] = '\0', m++;
		}
	}
	words[m] = NULL;
	return (words);
}

