#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename:Name of the file.
 * @letters:Nummber of letters to read and print
 *
 * Return: 0 t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fileread;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	fileread = read(fd, buff, letters);
	write
		(STDOUT_FILENO, buff, fileread);

	free(buff);
	close(fd);
	return (fileread);
}

