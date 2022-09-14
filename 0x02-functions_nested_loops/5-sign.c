#include "main.h"
/**
 * Description: print_sign _ function to check for a sign of the number
 * @p: is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int p)
{
	if (p > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (p < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

