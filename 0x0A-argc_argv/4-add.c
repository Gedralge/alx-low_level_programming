#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, n, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i <  argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!((argv[i][n] >= '0' && argv[i][n] <= '9') || argv[i][n] == '-'))
			{

				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

