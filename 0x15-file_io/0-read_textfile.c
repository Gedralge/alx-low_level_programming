#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to posix stdout.
 * @filename: Apointer to the name of the file.
 * @letters:The number of letters the function should read and print
 *
 * Return: if the function fails or filename is NULL -0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int gerrol;
	ssize_t read_check, count;
	char *buffer;

	if (filename == NULL) /* check if file is present */
		return (0);

	gerrol = open(filename, O_RDONLY); /*open gerrol*/

	if (gerrol == -1)
		return (0);

	/* get the size of buffer from number of letters */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_check = read(gerrol, buffer, letters); /* read file*/
	if (read_check == -1) /* check if gerrol failed */
		return (0);

	count = write(STDOUT_FTLENO, buffer, read_check); /*write to POSIX*/
	if (count == -1 || read_check != count) /* check if write failed */
		return (0);

	free(buffer);

	close(gerrol); /* close gerrol*/

	return (count);
}

