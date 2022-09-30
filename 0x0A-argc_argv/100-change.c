#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int change(int cents);
/**
 * main - prints the main num of coins to make change for an acount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned int count = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 * @cents: amount of coins from main function
 * Return:change
 */
int change(int cents)
{
	int n = 25, i = 10, j = 5, k = 2, p = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= i)
		{
			cents -= i;
			coins++;
		}
		while (cents >= j)
		{
			cents -= j;
			coins++;
		}
		while (cents >= k)
		{
			cents -= k;
			coins++;
		}
		while (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}
	return (coins);
}

