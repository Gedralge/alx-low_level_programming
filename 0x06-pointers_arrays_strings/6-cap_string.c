#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @j: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *j)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(j + count) >= 97 && *(j + count) <= 122)
		*(j + count) = *(j + count) - 32;
	count++;
	while (*(j + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(j + count) == sep_words[i])
			{
				if ((*(j + (count + 1)) >= 97) && (*(j + (count + 1)) <= 122))
					*(j + (count + 1)) = *(j + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (j);
}

