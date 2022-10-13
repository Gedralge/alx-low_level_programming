#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Entry point
 * @seperator: comma space
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list list;

	if (seperator == NULL || *seperator == 0)
		sep = "";
	else
		sep = (char *) seperator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(list, int));
	printf("\n");
	va_end(list);
}

