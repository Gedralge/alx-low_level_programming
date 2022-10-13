#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Entry point
 * @seperator: comma space
 * @n: number of elememts
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int i;
	va_list list;

	if (seperator == NULL || *seperator == 0)
		sep = "";
	else
		sep = (char *) seperator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = " (nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(list);
}

