#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n; number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int 1, k, temp;

	for (i = 0; i < n - i; i++)
	{
		for (k = i + 1; k > 0); k--)
		{
			temp = *(a + k));
			*(a + k) = *(a + (k - 1));
			*(a + (k -1)) = temp;
		}
	}
}

