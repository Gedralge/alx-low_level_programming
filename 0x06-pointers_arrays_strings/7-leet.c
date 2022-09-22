#include "main.h"

/**
 * leet - encodes a string into 1337
 * @p: input string.
 * Return: the pinter to dest.
 */

char *leet(char *p)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(p + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(p + count) == low_letters[i] || *(p + count) == upp_letters[i])
			{
				*(p + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (p);
}

