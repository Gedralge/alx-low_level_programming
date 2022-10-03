#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the main num of coins to make change for an acount of money
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 *
 */

int main(int argc, char *argv[])
{
	int principle, total, change, file;
	int coins[] = {25, 10, 5, 2, 1};
	
	principle = total = change = file = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[principle] != '\0')
	{
		if (total >= coins[principle])
		{
		file = (total / coins[principle]);
		change += file;
		total -= coins[principle] * file;
		}
		principle++;
	}
	printf("%d\n", change);
	return (0);
}

