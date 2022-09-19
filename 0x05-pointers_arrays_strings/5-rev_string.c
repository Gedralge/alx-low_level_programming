#include "main.h"

/**
 * rev_string - reverse a string
 * @s:string
 * Return:void
 */
void rev_string(char *s)
{
	int i, k;

	char a[500];
	i = 0;
	k = 0;
	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(a + k);
		k++;
		i--;
	}
}

