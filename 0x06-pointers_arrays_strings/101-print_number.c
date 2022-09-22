#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer using only _putchar
 * @p: input integer
 * Return: no return
 */

void print_number(int p)
{
	int power;
	int neg;
	int hold;

	neg = 0;
	power = 1;
	hold = p;
	if (p < 0)
	{

		while (hold > 9 || hold < -9)
		{
			power *= 10;
			hold /= 10;
		}

		while (power > 0)
		{
			if (!neg)
					_putchar((p / power % 10);
						else
						_putchar((p / power % 10) * -1 + '0');

						power /= 10;
						}
						if (power == 1)
						{
						if (neg)
						_putchar(p % 10) * -1 + '0');
					else
					_putchar(p % 10 + '0');
					power = 0;
					}
					}
					}

