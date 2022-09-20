#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int i, c, k;
	char p;

	for (i = 0; s[i] != '\0'; i++)
		;
	k = i;
	for (i--, c = 0; c < k / 2 ; i--, c++)
	{
		p = s[c];
		s[c] = s[i];
		s[i] = p;
	}
}

