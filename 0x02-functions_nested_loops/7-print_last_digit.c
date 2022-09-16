#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @q: The number in question.
 *
 * Return: value of the last digit.
 */
int print_last_digit(int q)
{
	int last_digit = q % 10;
	
	if (last_digit < 0)
		last_digit *= -1;
	-putchar(last_digit + '0');
	return (last_digit);
}

