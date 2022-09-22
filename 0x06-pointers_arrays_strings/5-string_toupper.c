#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @p: input string
 *  Return: the pointer to dest.
 */
char *string_toupper(char *p)
{
	int count = 0;

	while (*(p + count) != '\0')
	{
		if ((*(p + count) >= 97) && (*(p + count) <= 122))
			*(p + count) = *(p + count) - 32;
		count++;
	}
	return (p);
}

