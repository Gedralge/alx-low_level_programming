#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 * Return:Always 0.
 */

int main(int ac, char **av)
{
	int file_from, file_to;
	size_t I_read = 1024, I_write, close_file;
	char content[1024];

	if (ac != 3)
	{ dprintf(STDERR_FILENO, " Usage: cp file_from file_to\n");
		exit(97); }
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{ dprintf(STDERR_FILENO, " Error: can't read from file %s\n", av[1]),
		exit(98); }
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{ dprintf(STDERR_FILENO, " Error: can't write to %s\n", av[2]);
		exit(99); }
		while (I_read == 1024)
		{
			I_read = read(file_from, content, 1024);
			if (I_read == -1)
			{ dprintf(STDERR_FILENO, " Error: can't read from file %s\n", av[1]);
				exit(98); }
			I_write = write(file_to, content, I_read);
			if (I_write == -1)
			{ dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
				exit(99);
			}
			close_file = close(file_from);
			if (close_file == -1)
			{ dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
				exit(100); }
			close_file = close(file_from);
			if (close_file == -1)
			{ dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
				exit(100); }
			return (0); }
}

