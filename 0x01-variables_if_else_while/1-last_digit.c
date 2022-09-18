#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random number to variable
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	char last[] = "last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf(" greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf(" less than 6 and not 0\n");
	}
	return (0);
}
