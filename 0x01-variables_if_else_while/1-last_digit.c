#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random number to variable
 *
 * Return: Always (Success)
 */
intmain(void)
{
	int m;
	char last[] = "last digit of" ;

	srand(time(0));
	m = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is " , last, m, m % 10 > 5);
	{
		printf(" greater than 5\n")
	}
	else if (m % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf(" less than 6 and not 0\n");
	}
	return (0)
}

