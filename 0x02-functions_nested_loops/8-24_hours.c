#include "main.h"

/**
 * jack_bauer - func that prints every minute of the day of jack bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop count hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}

