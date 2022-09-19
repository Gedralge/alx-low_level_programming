#include "main.h"

/**
 * swap_int - swaping 2 integer using a pointer
 * @a:integer
 * @b:integer
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
	return;

}

