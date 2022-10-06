#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to newly created string, else NULL if failure ocuurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int gerrol, gerrol2, len1, len2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	len1 = 0;
	while (*(s1 + len1))
		len1++;
	len2 = 0;
	while (*(s2 + len2))
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == 0)
		return (0);
	for (gerrol = 0; gerrol < len1; gerrol++)
		*(str + gerrol) = *(s1 + gerrol);
	for (gerrol2 = 0; gerrol2 < n; gerrol2++, gerrol++)
		*(str + gerrol) = *(s2 + gerrol2);
	*(str + gerrol) = '\0';
	return (str);
}

